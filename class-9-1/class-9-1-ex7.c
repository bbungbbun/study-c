#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* px, int* py);

int main(void) {

    int a = 10, b = 20;

    printf("swap() 호출 전 a = %d, b = %d \n", a, b);
    
    swap(&a, &b);
    
    printf("swap() 호출 후 a = %d, b = %d \n", a, b);
    
	return 0;
}

void swap(int* px, int* py){
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}
