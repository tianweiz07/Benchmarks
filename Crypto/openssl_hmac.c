#include <stdio.h>
#include <string.h>
#include <openssl/hmac.h>
 
int main()
{
    char key[] = "012345678";
    char text[16];
    unsigned char* digest;
    
    int i;
    while (1) {
        for (i = 0; i<16; i++)
            text[i] = random()%256;

        digest = HMAC(EVP_sha1(), key, strlen(key), (unsigned char*)text, strlen(text), NULL, NULL);    
	if (digest == NULL)
	    return 0;
    }
    return 0;
}
