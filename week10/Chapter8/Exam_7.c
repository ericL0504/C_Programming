#include <stdio.h>

int main(void)
{
    int arr[100], cnt = 0;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
            break;

        arr[i] = (arr[i] % 2 == 0) ? arr[i] / 2 : arr[i] * 2;
        cnt++;
    }

    printf("%d\n", cnt);

    for (int i = 0; i < cnt; i++)
        printf("%d ", arr[i]);

    return 0;
}