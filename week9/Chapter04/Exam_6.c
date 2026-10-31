#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    char *temp;
    temp = (num %2 == 0) ? "Even" : "Odd";
    printf("%s",temp);

    return 0;
}