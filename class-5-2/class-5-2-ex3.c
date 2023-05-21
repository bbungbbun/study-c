#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double money = 1.0;

    for(int i = 2; i <= 30; i++){
        money *= 2.0;
        printf("%d일 날 현재 금액 = %lf \n", i, money);
    }
    
	return 0;
}