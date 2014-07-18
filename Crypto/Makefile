CC = gcc
CFLAGS = Wall
LIBS = lcrypto

ALL: AES RSA

AES:
	$(CC) -$(CFLAGS) openssl_aes.c -o openssl_aes -$(LIBS)

RSA:
	$(CC) -$(CFLAGS) openssl_rsa.c -o openssl_rsa -$(LIBS)

clean:
	rm -rf openssl_aes openssl_rsa
