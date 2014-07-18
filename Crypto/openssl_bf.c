#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <openssl/blowfish.h>

int main()
{
    unsigned char rawKey[] = "password";

    BF_KEY key;
    BF_set_key(&key, strlen((char*) rawKey), rawKey);

    unsigned char msg[128];
    unsigned char enc[64];
//    unsigned char dec[64];

    unsigned char ivec[8];

    int i;
    while (1) {
        for (i = 0; i < 128; i++) 
            msg[i] = random() % 256;

        memset(enc, 0, 64);
        memset(ivec, 0, 8);

        BF_cbc_encrypt(msg, enc, strlen((char*) msg) + 1, &key, ivec, BF_ENCRYPT);
//        printf("Encryption Message: %s\n", enc);

//        memset(dec, 0, 64);
//        memset(ivec, 0, 8);

//        BF_cbc_encrypt(enc, dec, strlen((char*) msg) + 1, &key, ivec, BF_DECRYPT);
//        printf("Decryption Message: %s\n", dec);
    }

    return 0;
}
