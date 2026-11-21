#include <stdio.h>

int main()
{
    struct Person
    {
        char name[20];
        int age;
    };

    struct Person p1 = {"Yejun", 12};
    struct Person p2;

    scanf("%s", p2.name);
    scanf("%d", &p2.age);

    printf("Your name : %s, age : %d\n", p1.name, p1.age);
    printf("Frineds name : %s, age : %d\n", p2.name, p2.age);

    return 0;
}