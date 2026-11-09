#include <stdio.h>

void printNum(int n)
{
    if (n == 0)
        return;
    printNum(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    printf("정수를 입력하세요");
    scanf("%d", &n);
    printNum(n);
    return 0;
}