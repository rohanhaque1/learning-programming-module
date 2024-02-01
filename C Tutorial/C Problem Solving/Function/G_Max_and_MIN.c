// #include <stdio.h>

// void max_min(int X, int *A[X])
// {
//     for (int i = 0; i <= X; i++)
//     {
//         scanf("%d", &A[X]);
//     }
//     // min
//     int K;
//     for (int i = 0; i < X; i++)
//     {
//         for (int j = 1; j < K; j++)
//         {
//             if (A[i] >= A[j])
//             {
//                 printf("i boro");
//             }
//             else
//             {
//                 printf("j boro");
//             }
//         }
//         K++;
//         printf(" ");
//     }
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     max_min(N, A[N]);
//     return 0;
// }

#include <stdio.h>

void findMaxMin(int N, int X[], int max, int min)
{
    for (int i = 0; i < N; i++)
    {
        if(X)
        {

        }
    }

}

int main()
{
    int N, max, min;
    scanf("%d", &N);
    int A[1001];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    findMaxMin(N, A, max, min);
    return 0;
}