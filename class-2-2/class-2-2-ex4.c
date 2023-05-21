#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int sum;
	int price;
	int hotel;
	int day;
	int nights;

	printf("여행은 몇 박인가요?");
	scanf("%d", &nights);

	printf("항공권 가격은 얼마인가요?");
	scanf("%d", &price);

	printf("호텔 1박 가격은 얼마인가요?");
	scanf("%d", &hotel);

	printf("하루에 필요한 용돈은 얼마인가요?");
	scanf("%d", &day);

	sum = price + (hotel + day) * nights;

	printf("========================\n");
	printf("총 여행 비용: %d \n", sum);
	printf("========================\n");

	return 0;
}