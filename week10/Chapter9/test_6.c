#include <stdio.h>
int main()
{
    int arr[5][4];
    int sum[5]={0};
    float avg[5]={0};

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            scanf("%d",&arr[i][j]);
            
            sum[i] += arr[i][j];
            avg[i] += (float) arr[i][j] / 4;
        }
    }

    for (int i=0; i<5; i++)
    {
        printf("%d %.1f\n",sum[i],avg[i]);
    }
    return 0;
}