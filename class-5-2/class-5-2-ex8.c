#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;

    for(i = 0; i < 10; i++){
        if(i % 2 == 0)
            continue;
        printf("정수 : %d \n", i);
    }

	return 0;
}