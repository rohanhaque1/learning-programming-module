#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);
    for (int row = 1; row <= N; row++)
    {
        for (int col = 1; col <= N - row; col++)
        {
            printf(" ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
        return 0;
}