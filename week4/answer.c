#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int answer;
    int num;
    int count = 0;

    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("1~100까지의 숫자 맞추기\n");

    while(1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);
        count++;

        if (num > answer)
        {
            printf("정답은 더 작은 숫자입니다.\n");
        }
        else if (num < answer)
        {
            printf("정답은 더 큰 숫자입니다.\n");
        }
        else
        {
            printf("정답입니다!\n");
            printf("%d번 시도해서 정답을 맞추었습니다.\n", count);
            break;
        }
    }

    return 0;
}