#include <stdio.h>

int main()
{
    int temp;
    int a,b;
    printf("a,b에 정수 입력:");
    scanf("%d %d",&a,&b);

    temp =b;
    while(temp>0)   //(temp !=0)
    {
        printf("%d\n", a*(temp%10));
        temp/=10;
    }
    printf("%d", a*b);
}