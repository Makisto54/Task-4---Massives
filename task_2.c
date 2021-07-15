#include <stdio.h>
#define N 5

int main(void)
{
    int a[N];
    int temp = 0;
    int counter = 1;

    printf("Base massive - ");
    for (int i = 0; i < N; i++)
    {
        a[i] = counter++;
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < N / 2; i++)
    {
        temp = a[i];
        a[i] = a[N - i - 1];
        a[N - i - 1] = temp;
    }

    printf("New massive - ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}