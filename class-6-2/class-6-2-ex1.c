#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void) {
	int i, j;
    // i: 제일 큰 수가 들어가는 자리(SIZE-1 ~ 1)
    // j: 비교하는 자리를 의미(0 ~ i-1)

    int list[SIZE] = {39, 2, 80, 45, 15};
    // 정렬된 경우: 2, 15, 39, 45, 80


    for (i = SIZE - 1; i > 0; i--){
        for (j = 0; j < i; j++){
            if(list[j] > list[j + i]){
                int tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
        
    for (i = 0; i < SIZE; i++) printf("%d", list[i]);
    

	return 0;
}