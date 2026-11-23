#include <stdio.h>
#include <string.h>

struct Student
{
    char name[21];
    int score[3];
    int total;
};

void input(struct Student p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%20s", p[i].name);

        p[i].total = 0;

        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &p[i].score[j]);
            p[i].total += p[i].score[j];
        }
    }
}

void sort(struct Student p[], int n)
{
    struct Student temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(p[j].total < p[j + 1].total)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void output(struct Student p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s ", p[i].name);

        for(int j = 0; j < 3; j++)
        {
            printf("%d ", p[i].score[j]);
        }

        printf("%d\n", p[i].total);
    }
}

int main()
{
    int n;
    struct Student p[10];

    scanf("%d", &n);

    input(p, n);
    sort(p, n);
    output(p, n);

    return 0;
}