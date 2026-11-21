
#include <stdio.h>

int main()
{
    struct Person
    {
        char name[20];
        int height;
        float weight;
    };

    struct Person p[5];
    struct Person temp;

    // 5명의 정보 입력
    for (int i = 0; i < 5; i++)
    {
        scanf("%19s", p[i].name);
        scanf("%d %f", &p[i].height, &p[i].weight);
    }

    // 키를 기준으로 버블 정렬
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (p[j].height > p[j + 1].height)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    // 정렬된 결과 출력
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n",
               p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}