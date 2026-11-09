#include <stdio.h>

int main()
{
    int num,result=0;
    scanf("%d",&num);

    for (int i=0;i<=num;i++)
    {
        if (i%5 == 0)
        {
            result += i;
        }
    }
    printf("%d",result);
    return 0;
}