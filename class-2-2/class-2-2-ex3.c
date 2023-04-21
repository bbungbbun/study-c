#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int x; // 100 입력
	int y; // 200 입력
	int result;

	printf("첫 번째 숫자를 입력하시오: ");
	scanf("%d", &x);
	printf("두 번째 숫자를 입력하시오: ");
	scanf("%d", &y);

	result = x + y;
	printf("두 수의 합 = %d \n", result);

	result = x - y;
	printf("두 수의 차 = %d \n", result);

	result = x * y;
	printf("두 수의 곱 = %d \n", result);

	result = x / y;
	printf("두 수의 몫 = %d \n", result); // 0 출력 -> 정상 출력 상태임

	return 0;
}