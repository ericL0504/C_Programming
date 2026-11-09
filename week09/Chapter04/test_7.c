#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c", &ch);

    if (ch == 'A')
        printf("Excellent");
    else if (ch == 'B')
        printf("Good");
    else if (ch == 'C')
        printf("Usually");
    else
        printf("error");

    return 0;
}