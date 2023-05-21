#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# define SIZE 5

double plus (int x, int y);

// double print_array (int* values, int n);
double print_array (int values[], int n);

int main(void) {

    int i;
    int data[SIZE] = {10, 20, 30, 40, 50}

    int (*pt)(int a, int b);

    int a = 3, b = 5;
    pt = plus;
    // pt(a,b) == plus(a, b);
    // plus(2,3);

    printf("result = %d \n", pt(a,b));
    printf("result = %d \n", plus(a,b));

	return 0;
}

double plus (int x, int y){
    return x + y;
}
