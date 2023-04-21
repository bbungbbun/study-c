#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, sum;

    i = 1;
    sum = 0;

    while(i <= 1000){
        sum += i; // sum = sum + i;
        i++;
    }

    printf("합은 %d입니다. \n", sum);

	return 0;
}