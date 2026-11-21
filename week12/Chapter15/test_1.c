#include <stdio.h>

int main()
{
    struct Student 
    {
        char name[20];
        char school[20];
        int grade;
    };

    struct Student s;
    scanf("%s",s.name);
    scanf("%s",s.school);
    scanf("%d",&s.grade);

    printf("Name : %s\nSchool : %s\nGrade : %d",s.name,s.school,s.grade);
    return 0;
}