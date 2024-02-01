// #include <stdio.h>

// void fun(int i, int N)
// {
//     if (i == N + 1)
//         return;
//     printf("I love Recursion\n");
//     fun(i + 1, N);
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     fun(1, N);
//     return 0;
// }

// 1 to N
// #include <stdio.h>

// void fun(int N, int i)
// {
//     if(i == N+1)
//         return;
//     printf("%d\n", i);
//     fun(N, i + 1);
// }

// int main (){
//     int N;
//     scanf("%d", &N);
//     fun(N, 1);
//     return 0;
// }

// N to 1
// #include <stdio.h>

// void fun(int n)
// {
//     if (n == 0)
//         return;
//     if (n == 1)
//     {
//         printf("%d", n);
//     }
//     else
//     {
//         printf("%d ", n);
//     }
//     fun(n - 1);
// }

// int main (){
//     int N;
//     scanf("%d", &N);
//     fun(N);
//     return 0;
// }
// #include <stdio.h>

// void fun(int N, int i)
// {
//     if(i == N+1)
//         return;
//     fun(N, i + 1);
//     printf("%d\n", i);
// }

// int main (){
//     int N;
//     scanf("%d", &N);
//     fun(N, 1);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if(i % 2 == 0)
//         {
//             printf("%d ", A[i]);
//         }
//     }
//     return 0;
// }

// Summation
// #include <stdio.h>

// int sum(int N, int A[], int i)
// {
//     if(i == N)
//         return 0;
//     long long int sumNumbers = sum(N, A, i+1);
//     return sumNumbers + A[i];
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     long long int s = sum(N, A, 0);
//     printf("%lld", s);
//     return 0;
// }

// length
#include <stdio.h>

long long int sum(int N, int A[], int i)
{
    if (i == N)
        return 0;
    long long int sumNumbers = sum(N, A, i + 1);
    return sumNumbers + A[i];
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    long long int s = sum(N, A, 0);
    printf("%lld", s);
    return 0;
}