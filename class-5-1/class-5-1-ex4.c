#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 5;
    int factorial = 1;

    while(i >= 1){
        factorial *= i; // factorial = factorial * i
        i--;
    }
    printf("%d \n", factorial);

	return 0;
}