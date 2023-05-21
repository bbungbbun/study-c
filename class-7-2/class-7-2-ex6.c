#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main(void) {

    int i;
    srand(time(NULL));

    for (i = 0; i < 6; i++){
        printf("%d, ", 1 + rand() % MAX); // MAX까지의 난수 생성
    }
    
	return 0;
}
