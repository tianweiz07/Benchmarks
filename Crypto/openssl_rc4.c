#include <stdio.h>
#include <string.h>
#include <openssl/rc4.h>
#include <stdlib.h>

int main(void)
{

    RC4_KEY key;
    static unsigned char key_data[256] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef};

    unsigned char text[16];
    unsigned char*  ciphertext = (unsigned char*) malloc(sizeof(char) * strlen((char *)text)); 

//    unsigned char*  plaintext  = (unsigned char*) malloc(sizeof(char) * strlen((char *)text));


    int i;
    RC4_set_key(&key, 8, key_data);
    while (1) {
        for (i = 0; i<16; i++)
            text[i] = random()%256;

        RC4(&key, strlen((char *)text), text, ciphertext);

        /* The decryption process */
/*
        RC4_set_key(&key, 8, key_data);
        RC4(&key, strlen((char *)text), ciphertext, plaintext);
*/
    }
    free(ciphertext);
//    free(plaintext);

    return 0;
}
