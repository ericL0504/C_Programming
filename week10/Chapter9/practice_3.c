#include <stdio.h>
int main()
{
    int arr[20] = {1,1};

    for (int i=2; i<20; i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
    }

    for (int i=0; i<20; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}