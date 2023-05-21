#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main(void) {

    int x = 0, result;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    result = sum(x);
    printf("1부터 %d까지의 합은 %d입니다.\n", x, result);    

	return 0;
}

int sum(int n){
    if (n <= 1) return 1;
    else return n + sum(n - 1);
}
