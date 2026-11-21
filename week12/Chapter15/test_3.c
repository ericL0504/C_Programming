#include <stdio.h>

int main()
{
    struct Person 
    {
        char name[20];
        int height;
    };

    struct Person p[3];
    
    for (int i=0; i<3; i++)
    {
        scanf("%19s",p[i].name);
        scanf("%d",&p[i].height);
    }

    for (int i=0; i<3; i++)
    {
        printf("%s : %dcm\n",p[i].name,p[i].height);
    }

    return 0;
}   