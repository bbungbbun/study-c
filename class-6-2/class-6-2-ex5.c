#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void) {
	int r, c;

    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ROWS][COLS];

    for (r = 0; r < ROWS; r++){
        for (c = 0; c < COLS; c++){
            B[c][r] = A[r][c];
        }
    }

    printf("A \t \t B \n");

    
    for (r = 0; r < ROWS; r++){
        for (c = 0; c < COLS; c++){
            printf("%d", A[r][c]);
        }

        printf("\t\t");
        
        for (c = 0; c < COLS; c++){
            printf("%d", B[r][c]);
        }

        printf("\n");
    }

	return 0;
}