#include <stdio.h>

int main(void)
{
    int a, b;
    float arr[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    float ascore = 0, bscore = 0, sum = 0;

    scanf("%d %d", &a, &b);

    ascore = arr[a - 1];
    bscore = arr[b - 1];

    sum = ascore + bscore;

    printf("%.1f", sum);

    return 0;
}