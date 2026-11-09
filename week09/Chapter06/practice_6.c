#include <stdio.h>
int main()
{
    int score, sum=0,count=0;
    float avg=0;

    for (int i=1; i<=5; i++)
    {
        scanf("%d",&score);
        sum += score;
        count++;
    }
    avg = (float)sum / count;
    printf("sum : %d\navg : %.1f",sum,avg);
    return 0;
}