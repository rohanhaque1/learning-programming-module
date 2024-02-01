#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= (N - 1) / 2 + 6; i++)
    {
        for (int j = 1; j <= ((N - 1) / 2 + 6) - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}