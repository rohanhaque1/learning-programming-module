#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, Temp;
        scanf("%d", &N);
        int A[N], B[N], C[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    Temp = B[i];
                    B[i] = B[j];
                    B[j] = Temp;
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            C[i] = A[i] - B[i];
            if (C[i] < 0)
            {
                printf("%d ", C[i] * -1);
            }
            else
            {
                printf("%d ", C[i]);
            }
        }
        printf("\n");
    }
        return 0;
}