#include <stdio.h>
int main()
{
    int arr[10], sum=0,num=0;
    float avg=0;

    for (int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
        num++;
    }
    avg = (float) sum / num;
    printf("sum = %d\navg = %.1f",sum,avg);
    
    return 0;
}