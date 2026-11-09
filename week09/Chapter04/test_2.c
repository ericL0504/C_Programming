#include <stdio.h>
int main()
{
    int height=0, weight=0, stat = 0;
    scanf("%d %d",&height,&weight);
    stat = weight + 100 - height;

    if (stat > 0)
    {
        printf("%d\nObesity\nNeed control",stat);
    }
    else 
    printf("%d",stat);
    return 0;
}