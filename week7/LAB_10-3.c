#include <stdio.h>

#define MAX_student 50

void bubbleSort(int *TStart, int n);

int main()
{
    int n;
    int score[MAX_student];
    int *TStart = score;

    printf("학생수를 입력하십시오: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_student)
    {
        printf("학생수 범위 오류\n");
        return 1;
    }

    // 성적 입력
    for (int i = 0; i < n; i++)
    {
        printf("%d번째 학생 성적 입력: ", i + 1);
        scanf("%d", TStart + i);
    }

    // 버블 정렬 실행
    bubbleSort(TStart, n);

    // 정렬된 성적 출력
    printf("\n정렬된 성적: ");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", *(TStart + i));
    }

    // 최고 성적과 최하 성적 출력
    printf("\n최고 성적 출력: %d", *(TStart + n - 1));
    printf("\n최하 성적 출력: %d\n", *TStart);

    return 0;
}

// 버블 정렬 함수
void bubbleSort(int *TStart, int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(TStart + j) > *(TStart + j + 1))
            {
                temp = *(TStart + j);
                *(TStart + j) = *(TStart + j + 1);
                *(TStart + j + 1) = temp;
            }
        }
    }
}