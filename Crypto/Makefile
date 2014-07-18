CC = gcc
CFLAGS = Wall
LIBS = lcrypto

ALL: AES RSA BF

AES:
	$(CC) -$(CFLAGS) openssl_aes.c -o openssl_aes -$(LIBS)

RSA:
	$(CC) -$(CFLAGS) openssl_rsa.c -o openssl_rsa -$(LIBS)

BF:
	$(CC) -$(CFLAGS) openssl_bf.c -o openssl_bf -$(LIBS)

clean:
	rm -rf openssl_aes openssl_rsa openssl_bf
