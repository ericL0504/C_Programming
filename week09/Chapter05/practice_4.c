#include <stdio.h>
int main(void)
{
    int num,sum=0,cnt=0;
    float avg;
    while(1)
    {   
        scanf("%d",&num);
        if (num == 0)
            break;
        sum += num;
        cnt++;
    }
    avg = (float)sum / cnt;
    printf("cnt = %d\nsum = %d\navg = %.2f",cnt,sum,avg);
    return 0;
}