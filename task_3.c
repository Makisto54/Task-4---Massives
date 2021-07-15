#include <stdio.h>
#define N 5

int main(void)
{
    int a[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            a[i][j] = 0;
        }
        for (int j = N - i - 1; j <= N ; j++)
        {
            a[i][j] = 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}