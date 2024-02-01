#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        long long int M;
        int A, B, C, X;
        scanf("%lld %d %d %d", &M, &A, &B, &C);
        X = M / (A * B * C);
        if ((A * B * C * X) != M)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", X);
        }
    }
    return 0;
}