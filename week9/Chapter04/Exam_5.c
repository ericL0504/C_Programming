#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);

    switch(year)
    {
        case 2:
            printf("28");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
    }
    return 0;
}