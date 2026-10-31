#include <stdio.h>
int main()
{
    int n,even=0;
    for (int i=1; i<=10; i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            even++;
        }
    }
    printf("Even numbers = %d",even);
    return 0;
}