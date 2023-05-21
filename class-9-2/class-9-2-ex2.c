#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int a = {10, 20, 30, 40, 50};
    
    printf("배열의 이름 = %u \n", a);
    printf("첫번째 원소의 주소 = %u \n", &a[0]);
    printf("두 번째 원소 *(a+1) = %d \n", *(a+1));
    printf("두 번째 원소 a[1] = %d \n", a[1]);

	return 0;
}