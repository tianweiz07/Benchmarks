CC = gcc
CFLAGS = Wall
LIBS = lcrypto

ALL: AES RSA BF HMAC

AES:
	$(CC) -$(CFLAGS) openssl_aes.c -o openssl_aes -$(LIBS)

RSA:
	$(CC) -$(CFLAGS) openssl_rsa.c -o openssl_rsa -$(LIBS)

BF:
	$(CC) -$(CFLAGS) openssl_bf.c -o openssl_bf -$(LIBS)

HMAC:
	$(CC) -$(CFLAGS) openssl_hmac.c -o openssl_hmac -$(LIBS)

clean:
	rm -rf openssl_aes openssl_rsa openssl_bf openssl_hmac
