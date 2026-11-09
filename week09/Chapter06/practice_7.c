#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
    for (int k=1; k<=5; k++)
    {
        printf("1 2 3 4 5\n");
    }
    return 0;
}