#include <stdio.h>

int main()
{
    int time,sum=0;
    float avg=0;
    scanf("%d",&time);

    int num=0;
    for (int i=1; i <= time; i++)
    {
        scanf("%d",&num);
        sum += num;
        avg = (float)sum / time;
    }
    printf("%.2f",avg);
    return 0;
}