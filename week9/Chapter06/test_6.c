#include <stdio.h>
int main()
{
    int n,score=0,sum=0;
    float avg=0;

    scanf("%d\n",&n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg = (float) sum / n;
    printf("avg : %.1f\n",avg);
    if (avg >= 80)
        printf("pass");
    else 
        printf("fail");
    return 0;
}