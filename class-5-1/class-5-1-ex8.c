#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int answer;
	int guess;
	int tries = 0; 

    srand(time(NULL));
    answer = rand() % 100; 

    do { 
        printf("정답을 추측하여 보시오 :");
        scanf("%d", &guess);
        tries++;
        if( guess > answer ) printf("제시한 정수가 높습니다. \n");
        if( guess < answer ) printf("제시한 정수가 낮습니다. \n");
    } while (guess != answer);

    printf("축하합니다. 시도횟수 = %d \n", tries);

	return 0;
} 

// 강의에서는 visual studio를 이용
// vscode code에서는 실행 시 error 발생