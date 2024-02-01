#include <stdio.h>

int count_before_one(int N, int A[])
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[1000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int result = count_before_one(N, A);
    printf("%d", result);
    return 0;
}