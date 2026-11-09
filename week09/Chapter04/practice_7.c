
#include <stdio.h>

int main(void)
{
    int select;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    scanf("%d", &select);

    if (select == 1)
        printf("You selected ADD.\n");
    else if (select == 2)
        printf("You selected EDIT.\n");
    else if (select == 3)
        printf("You selected DEL.\n");
    else
        printf("Wrong choice.\n");

    return 0;
}
