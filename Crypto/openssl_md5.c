#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>
 
int main()
{
    unsigned char digest[MD5_DIGEST_LENGTH];
    char text[16];

    int i;
    while (1) {
        for (i = 0; i<16; i++)
            text[i] = random()%256;
  
        MD5((unsigned char*)&text, strlen(text), (unsigned char*)&digest);    
    }
    return 0;
}
