#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 2; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    return 0;
}