#include <stdio.h>

int main()
{
    int arr[10],max=0,min=0; 
    for (int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        if (i==0)
        {
            max = arr[i];
            min = arr[i];
        }
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d %d",max,min);
    return 0;
}