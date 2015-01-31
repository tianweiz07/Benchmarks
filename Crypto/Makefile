CC = gcc
CFLAGS = Wall
LIBS = lcrypto

ALL: AES RSA BF HMAC MD5 SHA RC4 DSA

AES:
	$(CC) -$(CFLAGS) openssl_aes.c -o openssl_aes -$(LIBS)

RSA:
	$(CC) -$(CFLAGS) openssl_rsa.c -o openssl_rsa -$(LIBS)

BF:
	$(CC) -$(CFLAGS) openssl_bf.c -o openssl_bf -$(LIBS)

HMAC:
	$(CC) -$(CFLAGS) openssl_hmac.c -o openssl_hmac -$(LIBS)

MD5:
	$(CC) -$(CFLAGS) openssl_md5.c -o openssl_md5 -$(LIBS)

SHA:
	$(CC) -$(CFLAGS) openssl_sha.c -o openssl_sha -$(LIBS)

RC4:
	$(CC) -$(CFLAGS) openssl_rc4.c -o openssl_rc4 -$(LIBS)

DSA:
	$(CC) -$(CFLAGS) openssl_dsa.c -o openssl_dsa -$(LIBS)

clean:
	rm -rf openssl_aes openssl_rsa openssl_bf openssl_hmac openssl_md5 openssl_sha openssl_rc4 openssl_dsa
