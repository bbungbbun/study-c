#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k, i;

    for(i = 1; i <= 9; i++){ // 단 수를 의미함
        for(k = 1; k <= 9; k++) // 각 단에서 1부터 9까지 곱하는 수
            printf("%d x %d = %d \n", i, k, i * k);

        printf("\n\n");
    }

	return 0;
}