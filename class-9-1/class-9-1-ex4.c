#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void modify(int value){
    value = 99;
}

int main(void) {

    int number = 1;
    modify(number);

    printf("number = %d \n", number); // number = 1 출력됨
    
	return 0;
}