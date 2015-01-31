#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <openssl/dsa.h>
#include <openssl/engine.h> 
#include <openssl/err.h> 
#include <openssl/md5.h>

int main() { 

    DSA *dsa = DSA_generate_parameters(1024,NULL,0,NULL,NULL,NULL,NULL); 
    if(dsa==NULL) { 
        DSA_free(dsa); 
        return 0;
    } 

    if(DSA_generate_key(dsa) == 0) { 
        DSA_free(dsa); 
        return 0;
    } 

    unsigned char msg[16];
    unsigned int Siglen; 
    unsigned char *Sig = malloc(DSA_size(dsa)); 

    int i;
    while (1) {
        for (i = 0; i<16; i++)
            msg[i] = random()%256;

        if((DSA_sign(0, msg, strlen((char *)msg), Sig, &Siglen, dsa)) != 1) { 
            DSA_free(dsa); 
            return 0;
        }    
    }
    DSA_free(dsa);
    return 0;
}
