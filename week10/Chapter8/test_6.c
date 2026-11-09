#include <stdio.h>

int main()
{
    int arr[100],cnt=0,n,max=0,min=0;

    for (int i=0; i<100; i++)
    {
        scanf("%d",&n);
        if (n==0)
            break;
        else 
        {
            arr[cnt] = n;
        if (i==0)
            {
                max = arr[i];
                min = arr[i];
            }
        if 
            (max < arr[i])
                max = arr[i];
        if (min > arr[i])
                min = arr[i];
            }
        cnt++;
    }
    printf("%d",max-min);
    return 0;
}