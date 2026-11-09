#include <stdio.h>

int main()
{
    int score;
    char grades;
    printf("점수를 입력하세요");
    scanf("%d",&score);

    switch(score/10){
        case 10:
        case 9:
            grades='A';
            break;
        case 8:
            grades='B';
        case 6:
            grades='C';
            break;
        default:
            grades='D';
    }
    printf("%c", grades);
    return 0;
}