#include <stdio.h>
#include <string.h>

/*
데이터 암호화:
-원본 데이터 : data[i] = 5(2진법 0101)
-키: key = 3(2진법 0011)
-XOR(^) 연산 후 결과 : 0101 ^ 0011 = 0110 (결과 : 6)
-복호화: 0110 ^ 0011 = 0101
*/
void encrypt(char* data, char key) {
	//data[i] != '\0' && i < strlen(data)이 경우
	for (int i = 0; data[i] != '\0'; i++)
		data[i] = data[i] ^ key; // H (ASCII = 65) ^ M (ASCII = 78)
}

void decrypt(char* data, char key) {
	//data[i] != '\0' && i < strlen(data)이 경우
	for (int i = 0; data[i] != '\0'; i++)
		data[i] = data[i] ^ key; // H (ASCII = 65) ^ M (ASCII = 78)
}


int main() {
	char plaintext[] = "Hanbat National University";
	char key = 'M';

	printf("Original: %s\n", plaintext);
	encrypt(plaintext, key);

	printf("Encrypt: %s\n", plaintext);
	decrypt(plaintext, key);

	printf("Decrypt: %s\n", plaintext);


	return 0;
}