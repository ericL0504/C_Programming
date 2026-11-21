#include <stdio.h>

int main()
{
    struct Student 
    {   
        char school[20];
        int grade;
    };

    struct Student p1 = {"Jejuelementary",6};
    struct Student p2;
    
    scanf("%19s",p2.school);
    scanf("%d",&p2.grade);
    
    printf("%d grade in %s School",p1.grade,p1.school);
    printf("\n%d grade in %s School",p2.grade,p2.school);

}