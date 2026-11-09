#include <stdio.h>

int main()
{
    int arr[100] = {100},i=1;
    
    scanf("%d",&arr[1]);

    while (1)
    {   
        i++;    
        arr[i] = arr[i-2] - arr[i-1];
        
        if (arr[i] < 0)
            break;
    }
    for (int j=0; j<=i; j++)
        printf("%d ",arr[j]);
    
    return 0;
}