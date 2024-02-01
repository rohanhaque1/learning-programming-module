#include <stdio.h>

int main (){
    int N, V;
    scanf("%d", &N);
    long long int PositiveSum = 0, NegativeSum = 0;
    for (int i = 0; i < N; i++)
    {
        // int V;
        scanf("%d", &V);
        if(V > 0)
        {
            PositiveSum += V;
        }
        else
        {
            NegativeSum += V;
        }
        
    }
    printf("%lld %lld", PositiveSum, NegativeSum);
    return 0;
}