#include <stdio.h>

int main()
{
    int arr[5] = {5, 3, 8, 1, 2};
    int i, j, key;

    printf("초기 상태 배열 : [");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("] \n");

    // 두 번째 원소부터 하나씩 확인
    for (i = 1; i < 5; i++)
    {
        // 현재 삽입할 값을 저장
        key = arr[i];

        // 현재 값의 바로 앞부터 비교
        j = i - 1;

        // key보다 큰 값을 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 위치에 key 삽입
        arr[j + 1] = key;
    }

    //삽입정렬을 활용한 배열 출력
    printf("정렬 후의 배열 : [");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("] \n");

    return 0;
}