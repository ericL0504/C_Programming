#include <stdio.h>

int main()
{
    int a,b,sum=0,temp=0,count=0;
    float avg=0;

    scanf("%d %d",&a,&b);

    if (a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i=a; i <= b; i++)
    {
        if ( i % 3 == 0 || i % 5 == 0)
        {
        sum += i;
        count++;
        }
    }
    avg = (float)sum / count;
    printf("sum : %d\navg : %.1f",sum,avg);
    return 0;
}