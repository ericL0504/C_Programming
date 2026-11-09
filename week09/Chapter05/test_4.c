#include <stdio.h>
int main(void)
{
    int num,small=0,large=0;
    while(1)
    {
        scanf("%d",&num);
       
        if ( num >= 50)
            large++;
        else
            small++; 
        if (num >= 100)
            break;
    }
    printf("small : %d\nlarge : %d",small,large);
    return 0;
}