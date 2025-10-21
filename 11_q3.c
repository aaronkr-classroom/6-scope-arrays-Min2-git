#include <stdio.h>

void Test() {
	static int result = 0; // 지역변수(충돌?)
	printf("%d, ", result++);
}

int main() {
	for (int i = 0; i < 5; i++) Test(); // 0, 1, 2, 3, 4,

	return 0;
}