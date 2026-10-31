
#include <stdio.h>

int main()
{
    int num, time = 0;
    int sum = 0;
    float avg = 0;

    while (1)
    {
        scanf("%d", &num);

        if (num < 0 || num > 100)
            break;

        time++;
        sum += num;
    }

    if (time > 0)
        avg = (float)sum / time;

    printf("sum : %d\navg : %.1f", sum, avg);

    return 0;
}
