#include <stdio.h>
#define N 5

int main(void)
{
    int a[N][N];
    int cols = 0;
    int rows = 0;
    int counter = 1;

    while (counter != N * N + 1)
    {
        for (int i = cols; i < N - rows; i++)
        {
            a[cols][i] = counter++;
        }
        for (int i = cols + 1; i < N - rows; i++)
        {
            a[i][N - rows - 1] = counter++;
        }
        rows++;
        for (int i = N - rows - 1; i >= cols; i--)
        {
            a[N - rows][i] = counter++;
        }
        for (int i = N - rows - 1; i >= rows; i--)
        {
            a[i][cols] = counter++;
        }
        cols++;       
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