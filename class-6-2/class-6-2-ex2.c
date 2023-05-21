#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void) {
	int i, j;

    int list[SIZE] = {39, 12, 80, 45, 25};

    printf("----- 정렬 전 -----\n");

    for (i = 0; i < SIZE; i++){
        printf("%d: ", list[i]);

        for (int m = 0; m < list[i] / 10; m++){
            printf("*");
        }
        printf("\n");
    }
        
    for (i = SIZE - 1; i > 0; i--) {
        for (j = 0; j < i; j++)
        {
            if (list[j]> list[j + 1])
            {
                int tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp; 
            }
        }
    }

    printf("\n\n ----- 정렬 후 ----- \n");

    for (i = 0; i < SIZE; i++){
        printf("%d: ", list[i]);

        for (int m = 0; m < list[i] / 10; m++){
            printf("*");
        }
        printf("\n");
    }
    

	return 0;
}