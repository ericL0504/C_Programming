#include <stdio.h>
#include <string.h>

int main()
{
    struct Person 
    {
        char name[100], tel[100], addr[100];
    };

    struct Person p[3];
    struct Person fast;

    for(int i=0; i<3; i++)
    {
        scanf("%99s %99s %99s", p[i].name, p[i].tel, p[i].addr);
    }

    fast = p[0];

    for(int i=1; i<3; i++)
    {
        if(strcmp(p[i].name, fast.name) < 0)
        {
            fast = p[i];
        }
    }

    printf("name : %s\ntel : %s\naddr : %s\n", fast.name, fast.tel, fast.addr);

    return 0;
}