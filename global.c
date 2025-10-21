//global.c (전역 변수)

#include <stdio.h>

int result;

void Sum(int x, int y) {
	result = x + y;
	
}

int main() {
	int a = 3, b = 5;
	Sum(a, b);
	printf("%d + %d = %d", a, b, result);

	return 0;
}