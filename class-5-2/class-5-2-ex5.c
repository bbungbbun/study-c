#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

    for(y = 0; y < 5; y++){ // 줄의 갯수
        for(x = 0; x < 10; x++) 
            printf("*"); // 한줄에 들어가는 별의 갯수
        printf("\n");
    }

	return 0;
}