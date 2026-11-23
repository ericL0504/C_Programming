#include <stdio.h>
#include <string.h>

struct Score
{
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score a, struct Score b)
{
    struct Score result;

    strcpy(result.name, "Total");
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;

    return result;
}

int main()
{
    struct Score a, b, total;

    scanf("%s %d %d", a.name, &a.kor, &a.eng);
    scanf("%s %d %d", b.name, &b.kor, &b.eng);

    total = plus(a, b);

    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", total.name, total.kor, total.eng);

    return 0;
}