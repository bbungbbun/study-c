#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sub(void){
    int auto_count  = 0;
    static int static_count = 0;

    auto_count++;
    static_count++;

    printf(" auto_count  = %d \n", auto_count);
    printf(" static_count  = %d \n", static_count);
}

int main(void) {

    sub();
    sub();
    sub();
	return 0;
}
