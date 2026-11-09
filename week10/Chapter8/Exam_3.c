#include <stdio.h>
int main()
{
    int arr[10], sumodd=0,sumeven=0;

    for (int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
       if(i%2==0)
        {
            sumodd += arr[i];
        }
        else
        {
            sumeven += arr[i];
        }
    }

    printf("odd : %d\neven : %d",sumodd,sumeven);

    return 0;
}