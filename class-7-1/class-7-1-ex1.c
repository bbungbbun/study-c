#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_max(int x, int y){
    if(x > y) return (x);
    else return (y);
}

int main(void) {
	int x, y, max;

    printf("두 정수를 입력하시오 : ");
    scanf("%d %d", &x, &y);

    max = get_max(x, y);

    printf("두 수의 최대값은 %d입니다. \n", max);

	return 0;
}