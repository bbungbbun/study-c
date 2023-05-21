#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int x, int y);

int main(void) {

    int a = 10, b = 20;
    swap(a, b);

    printf("swap() 호출 후 a = %d, b = %d \n", a, b);
    // a, b의 값에는 변화가 없음
    
	return 0;
}

void swap(int x, int y){
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}
