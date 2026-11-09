#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);

    for (int i=1; i <= num; i++)
    {
        for (int j=1; j <= 2*(num-i); j++)
        {
            printf(" ");
        }

        for (int j=1; j <= 2*i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}