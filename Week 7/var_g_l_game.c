#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum;

void gameInit() {
	srand((unsigned int)time(NULL));
	randNum = rand() % 10 + 1;
}

void gamePlay() {
	int guess;
	int count = 0;
	int allowed = 5;
	printf("Guess the number (1~10) : ");
	while (count < allowed){
		scanf_s("%d", &guess);
		if (randNum == guess) {
			printf("Good guess! You win!\n", count);
			return;
		}
		else if (guess < randNum)
			printf("Too low! Try again!\n");
		else if (guess > randNum)
			printf("Too high! Try again!\n");
		count++;
	}
	printf("You are failed. TT\n");
}

int main() {
	gameInit();
	gamePlay();

	return 0;
}