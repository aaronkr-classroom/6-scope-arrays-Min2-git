#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>//time()

int rand_num;

void gameInit() {
	srand(time(0));//1970년 1월 1일 0:00부터현재까지 ms값
	rand_num = rand() % 10 + 1; //(0 - 9) +1 = [1 - 10]

}

void gamePlay() {
	//지역변수
	int guess = 0, count = 0, allowed = 5;

	printf("Guess the number (1-10): ");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("정답! Good! You Win!");
			break;

		}
		else if (guess < rand_num) {
			printf("Too low! Try higher!");
	
		}
		else if (guess > rand_num) {
			printf("Too high! Try lower!");

		}
	
	} while (count != allowed);

	if (count > allowed){ 
	printf("Too many guesses! You lose!");
	}
}

int main() {
	gameInit();
	gamePlay();

	return 0;
}