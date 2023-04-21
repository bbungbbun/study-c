#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main(void) {

	int key, i, isfind = 0;

	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };


	printf("[");

	for (i = 0; i < SIZE; i++){
		printf("%d ", list[i]);
	}

	printf("] \n");

	printf("탐색할 값을 입력하시오 : ");
	scanf("%d", &key);

	// 순차 탐색
	for (i = 0; i < SIZE; i++){
		if(list[i] == key ) {
			isfind = 1;
			printf("탐색 성공 인덱스 = %d \n", i);
			break;
		}
	}

	if(isfind == 0){
		printf("탐색 실패: 찾는 값이 없습니다.\n");
	}

	return 0;
}