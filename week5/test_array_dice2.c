#include <stdio.h>

int main()
{
    int dice[10];
    int count[7] = {0};
    int i;

    // 주사위 숫자 10개 입력받기
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &dice[i]);
        count[dice[i]]++;
    }

    // 각 숫자가 나온 횟수 출력하기
    for (i = 1; i <= 6; i++)
    {
        printf("%d번: %d회\n", i, count[i]);
    }

    return 0;
}