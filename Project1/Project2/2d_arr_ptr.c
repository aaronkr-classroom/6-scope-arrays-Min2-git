#include <stdio.h>


#define ROWS 3 //행
#define COLS 5 //열


void printArr(char arr[ROWS][COLS]) {
	//printf("배열의 상태:\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}

int main() {
	char data[ROWS][COLS] = { 0 };
	char (*p)[COLS];

	p = data;

	printf("시작 전:\n");
	printArr(data);
	printf("Press any key to continue...");
	getchar();

	(*p)[1] = 3;
	(*(p + 1))[2] = 4;
	(*(p + 2))[4] = 5;

	printf("초기 배열의 상태:\n");
	printArr(data);
	printf("Press any key to continue...");
	getchar();

	p = data;
	p++;
	(*p)[0] = 7;
	(*p)[4] = 8;
	(*(p - 1))[3] = 9;

	printf("두 번째수정 후 배열의 상태:\n");
	printArr(data);
	printf("Press any key to continue...");
	getchar();

	char* ptr = &data[0][0];
	*(ptr + 6) = 10;
	*(ptr + 10) = 11;
	*(ptr + 14) = 28;
	//*(ptr + 15) = 100;

	printf("포인터 산술 대신 후 배열의 상태:\n");
	printArr(data);
	printf("Press any key to continue...");
	getchar();

	char temp[COLS];
	for (int i = 0; i < COLS; i++) {
		temp[i] = data[0][i];
		data[0][i] = data[2][i];
		data[2][i] = temp[i];


	}
	printf("첫 번째 행과 세 번째 행 교환 후 배열의 상태:\n");
	printArr(data);
	printf("Press any key to continue...");
	getchar();



	return 0;
}