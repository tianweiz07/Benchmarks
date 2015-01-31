#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>

int main()
{
    char text[16];
    unsigned char obuf[20];
    int i;
    while (1) {
        for (i = 0; i<16; i++)
            text[i] = random()%256;
        SHA1((unsigned char *)text, strlen(text), obuf);
    }
    return 0;
}
