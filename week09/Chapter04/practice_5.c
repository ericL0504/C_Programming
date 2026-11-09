#include <stdio.h>

int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);

    if ( a >= 4 && b >=4)
    {
        printf("WIN.");
    }
    else if ( (a >= 4 && b < 4) || ( a < 4 && b >= 4))
    {
        printf("DRAW.");
    }
    else 
    {
        printf("LOSE.");
    }
    return 0;
}