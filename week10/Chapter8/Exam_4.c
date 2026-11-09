#include <stdio.h>

int main()
{
    float arr[6],sum=0,avg=0;
    int num=0;

    for (int i=0; i<6; i++)
    {
        scanf("%f",&arr[i]);
        sum += arr[i];
        num++;
    }

    avg = (float)sum/num;
    printf("%.1f",avg);

    return 0;
}