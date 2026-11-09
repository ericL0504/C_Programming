#include <stdio.h>

int main(void)
{
    int arr[100], n;
    int cnt = 0;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        if ((i + 1) % 2 == 0)
        {
            arr[cnt] = n;
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}