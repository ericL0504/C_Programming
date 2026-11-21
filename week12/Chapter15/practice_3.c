#include <stdio.h>

int main()
{
    struct Person 
    {
        char name[20];
        int age;
    };

    struct Person p[3];
    
    for (int i=0; i<3; i++)
    {
        scanf("%19s",p[i].name);
        scanf("%d",&p[i].age);
    }

    for (int i=0; i<3; i++)
    {
        printf("Name : %s\nAge : %d\n",p[i].name,p[i].age);
    }

    return 0;
}   