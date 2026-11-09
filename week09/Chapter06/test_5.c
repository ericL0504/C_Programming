#include <stdio.h>
int main()
{
    int num,multi3=0,multi5=0;
    for (int i=1; i<=10; i++)
    {
        scanf("%d",&num);
        if (num%3==0)
            multi3++;
        if (num%5==0)
            multi5++;
    }
    printf("Multiples of 3 : %d\nMultiples of 5 : %d",multi3,multi5);
    return 0;
}