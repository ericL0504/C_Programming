#include <stdio.h>

int main(void)
{
    int n;

    while (1)
    {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number: ");
        scanf("%d", &n);

        if (n == 1)
            printf("\nYou selected Input.\n");
        else if (n == 2)
            printf("\nYou selected Output.\n");
        else if (n == 3)
            printf("\nYou selected Delete.\n");
        else if (n == 4)
        {
            printf("\nYou selected Finish.\n");
            break;
        }
        else
        {
            printf("\nWrong input.\n");
        }
        printf("\n");
    }
    return 0;
}