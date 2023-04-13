#include<stdio.h>

int main(void) {
	int a = 100;
	int b = 200;
	int tmp;

	printf("교환 전: a = %d , b = %d \n", a, b);

	tmp = a;
	a = b;
	b = tmp;

	printf("교환 후: a = %d , b = %d \n", a, b);

	return 0;
}