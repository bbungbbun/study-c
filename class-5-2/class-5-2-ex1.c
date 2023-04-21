#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, sum;

    sum = 0;

    for(i = 1; i <= 10; i++) sum += i;
    
    printf("1부터 10까지 정수의 합 = %d \n", sum);

	return 0;
}