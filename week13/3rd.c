#include <stdio.h>

int main(void) 
{
    char food[5];
    printf("좋아하는 음식은?");
    scanf("%s",food);
    printf("좋아하는 음식: %s\n",food);

    return 0;
}