#include <stdio.h>
#include <string.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>

#define KEY_LENGTH  2048
#define PUB_EXP     3

int main(void) {
    size_t pri_len;            // Length of private key
    size_t pub_len;            // Length of public key
    char   *pri_key;           // Private key
    char   *pub_key;           // Public key
    char   msg[16];  // Message to encrypt

    char   *encrypt = NULL;    // Encrypted message
    int encrypt_len;

//    char   *decrypt = NULL;    // Decrypted message
//    int decrypt_len;

    // Generate key pair
    RSA *keypair = RSA_generate_key(KEY_LENGTH, PUB_EXP, NULL, NULL);

    // To get the C-string PEM form:
    BIO *pri = BIO_new(BIO_s_mem());
    BIO *pub = BIO_new(BIO_s_mem());

    PEM_write_bio_RSAPrivateKey(pri, keypair, NULL, NULL, 0, NULL, NULL);
    PEM_write_bio_RSAPublicKey(pub, keypair);

    pri_len = BIO_pending(pri);
    pub_len = BIO_pending(pub);

    pri_key = malloc(pri_len + 1);
    pub_key = malloc(pub_len + 1);

    BIO_read(pri, pri_key, pri_len);
    BIO_read(pub, pub_key, pub_len);

    pri_key[pri_len] = '\0';
    pub_key[pub_len] = '\0';

//    printf("\n%s\n%s\n", pri_key, pub_key);

    int i;
    while (1) {
        for (i = 0; i<16; i++)
            msg[i] = random()%256;
//        printf("Message to encrypt: %s\n", msg);

        // Encrypt the message
        encrypt = malloc(RSA_size(keypair));
        encrypt_len = RSA_public_encrypt(strlen(msg)+1, (unsigned char*)msg, (unsigned char*)encrypt, keypair, RSA_PKCS1_OAEP_PADDING);
        if (encrypt_len == -1)
            return 0;

        // printf("Encrypted message: %s\n", encrypt);

//        decrypt = malloc(encrypt_len);
//        decrypt_len = RSA_private_decrypt(encrypt_len, (unsigned char*)encrypt, (unsigned char*)decrypt, keypair, RSA_PKCS1_OAEP_PADDING);
//        if (decrypt_len == -1)
//            return 0;

        // printf("Decrypted message: %s\n", decrypt);
    }

    RSA_free(keypair);
    BIO_free_all(pub);
    BIO_free_all(pri);
    free(pri_key);
    free(pub_key);
    free(encrypt);
//    free(decrypt);

    return 0;
}
