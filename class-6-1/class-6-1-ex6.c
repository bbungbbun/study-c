#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main(void) {

	int prices[SIZE] = { 12, 3, 19, 18, 8, 12, 4, 1, 19 };

	int i, minimum;

	printf("[");

	for (i = 0; i < SIZE; i++){
		printf("%d ", prices[i]);
	}

	printf("[");

	minimum = prices[0];

	for (i = 0; i < SIZE; i++){
		if(prices[i] < minimum ) minimum = prices[i];
	}

	printf("최소값은 %d 입니다. \n", minimum);

	return 0;
}