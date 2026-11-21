#include <stdio.h>

int main()
{
    struct Point
    {
        float x;
        float y;
    };

    struct Point p[2];
    struct Point center;
    
    for (int i=0; i<2; i++)
    {
        scanf("%f %f",&p[i].x,&p[i].y);
    }
    center.x = (p[0].x + p[1].x)/2;
    center.y = (p[0].y + p[1].y)/2;

    printf("Center point = (%.1f, %.1f)",center.x,center.y);

    return 0;
}