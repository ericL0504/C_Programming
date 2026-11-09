#include <stdio.h>

int main()
{
    int arr[100],num=0,sum=0;
    float avg=0; 

    for (int i=0; i<100; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i] == 0)
            break;
        
        if (arr[i] % 5 == 0)
        {
            sum += arr[i];
            num++;
        }
    }
    avg = (float) sum / num;

    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f",num,sum,avg);

    return 0;
}