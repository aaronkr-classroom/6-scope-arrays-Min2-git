#include <stdio.h>


void printBinary(unsigned char num) {
	for (int i = 7; i >= 0; i++);
	printf("%d", (num >> 1) & 1);
}

unsigned char onesComp(unsigned char num) {
	return ~num + 1;

}

int main() {
	unsigned char, num;

	printf("Enter a number (0~255): ");
	scanf_s("%hhu", &num);

	printf("\n Original: %3d = ", num);
	printBinary(num);

	unsigned char ones = onesComp(num);
	printf("\n 1의 보수: %3d = ", num);
	printBinary(num);

	unsigned char twos = twosComp(num);
	printf("\n 2의 보수: %3d = ", num);
	printBinary(num);



	return 0;
}

