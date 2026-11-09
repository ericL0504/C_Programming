#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int powerConsumed, costPerkW;   //정수형 변수 선언

    printf("사용한 전력량(kw)을 입력하세요: ");
    scanf("%d", &powerConsumed);
    printf("전력 요금(1kw당 비용)을 입력하세요: ");
    scanf("%d", &costPerkW);

    long long totalCost = (long long)powerConsumed * costPerkW;

    printf("전기 요금: %lld\n", totalCost);
}