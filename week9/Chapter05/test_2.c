#include <stdio.h>
int main(void)
{
    int n, i=1,result=0;
    scanf("%d",&n);

    while (i<=n)
    {
        result += i;
        i++;
    }
    printf("%d",result);
    return 0;
}