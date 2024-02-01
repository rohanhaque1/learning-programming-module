// #include <stdio.h>

// int main()
// {
//     int N, K = 1;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= K; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//         K++;
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}