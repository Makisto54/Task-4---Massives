#include <stdio.h>
#define N 5

int main(void)
{
    int a[N][N];
    int counter = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = counter++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}