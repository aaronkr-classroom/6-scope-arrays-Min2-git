#include <stdio.h>

int result; // 전역변수

void Test() {
	int result = 5; // 지역변수(충돌?)
	result++;
}

int main() {
	Test();
	printf("result: %d", result); // 0, null
	
	return 0;

}