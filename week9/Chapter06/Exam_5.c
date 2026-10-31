#include <stdio.h>

int num;
int main()
{
    int odd=0,even=0;

    for (int i=0; i<10; i++)
    {
        scanf("%d",&num);
        if ( num % 2 == 0 )
        {
            even++;
        } 
        else 
        {
            odd++;
        }
    }
    printf("even : %d\nodd : %d",even,odd);
    return 0;
}