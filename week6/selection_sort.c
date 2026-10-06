#include <stdio.h>

int main()
{
    int arr[5] = {5, 3, 8, 1, 2};
    int i, j, min, temp;

    printf("초기 상태 배열 : [");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("] \n");

    // 배열의 처음부터 하나씩 정렬
    for (i = 0; i < 4; i++)
    {
        // 현재 위치를 가장 작은 값의 위치라고 가정
        min = i;

        // 현재 위치 다음부터 가장 작은 값 찾기
        for (j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                // 더 작은 값을 발견하면 위치 저장
                min = j;
            }
        }

        // 가장 작은 값을 현재 위치와 교환
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    //선택정렬을 한 배열 출력
    printf("정렬 후의 배열 : [");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("] \n");

    return 0;
}