#include <stdio.h>

int main()
{
    struct Student 
    {
        char name[10];
        int score;
    };

    struct Student s[5];
    struct Student max = {" ",0};

    for (int i=0; i<5; i++)
    {
        scanf("%9s",s[i].name);
        scanf("%d",&s[i].score);
        if (s[i].score > max.score)
        {
            max = s[i];
        }
    }

    printf("%s %d",max.name,max.score);

    return 0;

}