#include <stdio.h>
int main()
{
    int arr[10], sumodd=0,sumeven=0,num=0;
    float avg=0;

    for (int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
       if(i%2==0)
        {
            sumodd += arr[i];
            num++;
        }
        else
        {
            sumeven += arr[i];
        }
    }

    avg = (float) sumodd / num;
    printf("sum : %d\navg : %.1f",sumeven,avg);
    
    return 0;
}