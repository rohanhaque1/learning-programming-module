#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int row = 1; row <= N; row++)
    {
        for (int col = 1; col <= N - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= (2*row) - 1; col++)
        {
            if(row % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
            
        }
        printf("\n");
    }
    // reverse
    for (int row = N - 1; row >= 1; row--)
    {
        for (int col = 1; col <= N - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= (2*row) - 1; col++)
        {
            if (row % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
