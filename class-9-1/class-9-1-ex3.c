#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int number = 10;
    int* p;

    p = &number;

    printf("변수 number의 값 = %d \n", number);

    *p = 20; // number = 20와 동일
    printf("변수 number의 값 = %d \n", number);
    
    // *p = *p + 50;
	return 0;
}