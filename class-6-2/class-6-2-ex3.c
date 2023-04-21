#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j;

    int a[3][5] = {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}};

    for (i = 0; i < 3; i++){ // 행
        for (j = 0; j < 5; j++){ // 열
            printf("*");
        }
    }

	return 0;
}