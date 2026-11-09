#include <stdio.h>

int main(void)
{
    int arr[100], max, min;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
            break;

        if (i == 0)
            max = min = arr[i];
        else
        {
            if (arr[i] > max)
                max = arr[i];

            if (arr[i] < min)
                min = arr[i];
        }
    }

    printf("%d", max + min);

    return 0;
}