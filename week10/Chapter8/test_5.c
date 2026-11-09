#include <stdio.h>

int main()
{
    int arr[10],min=0;
    for (int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        if (i==0)
            min = arr[0];

        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d",min);
    return 0;
}