#include <stdio.h>

int main()
{
    struct Square 
    {
        int x1,y1,x2,y2;
    };

    struct Square s[2],result;

    for (int i=0; i<2; i++)
    {
        scanf("%d %d %d %d",&s[i].x1,&s[i].y1,&s[i].x2,&s[i].y2);
    }

    result.x1 = s[0].x1 < s[1].x1 ? s[0].x1 : s[1].x1;
    result.y1 = s[0].y1 < s[1].y1 ? s[0].y1 : s[1].y1;
    result.x2 = s[0].x2 > s[1].x2 ? s[0].x2 : s[1].x2;
    result.y2 = s[0].y2 > s[1].y2 ? s[0].y2 : s[1].y2;

    printf("%d %d %d %d\n",result.x1,result.y1,result.x2,result.y2);

    return 0;
}