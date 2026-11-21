#include <stdio.h>

int main()
{
    struct Person 
    {
        char name[10];
        int height;
    };

    struct Person p[5];
    struct Person min;

    for (int i = 0; i < 5; i++)
    {
        scanf("%9s", p[i].name);
        scanf("%d", &p[i].height);

        if (i == 0 || p[i].height < min.height)
        {
            min = p[i];
        }
    }

    printf("%s %d", min.name, min.height);

    return 0;
}