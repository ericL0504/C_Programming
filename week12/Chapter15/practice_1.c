#include <stdio.h>

int main()
{   
    //Person 구조체를 생성
    //멤버변수 이름, 나이,저장할 변수를 선언
    struct Person {
        char name[10];
        int age;
    };

    //scanf -> 구조체 멤버 변수에 저장(접근법 생각)
    struct Person p;
    //구조체제어변수.멤버변수
    scanf("%29s",p.name);
    scanf("%d",&p.age);

    printf("Your name is %s and you are %d years old.",p.name,p.age);
}