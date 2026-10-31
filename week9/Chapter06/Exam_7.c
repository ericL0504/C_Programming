#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    for (int i=1; i<11; i++)
    {
        printf("%d ",num*i);
    }
    return 0;
}