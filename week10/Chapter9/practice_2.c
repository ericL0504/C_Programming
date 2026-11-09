#include <stdio.h>

int main()
{
    int cnt[10] = {0},n;

    while (1)
    {
        scanf("%d",&n);
        if (n==0)
            break;

        cnt[n % 10]++;
    }

    for (int i=0; i<10; i++)
    {
        if (cnt[i] > 0)
            printf("%d : %d\n",i,cnt[i]);
    }

    return 0;
}