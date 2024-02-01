#include <stdio.h>

int sum(int X, int Y)
{
    long long int sum = X + Y;
    printf("%lld\n", sum);
    return sum;
}

int main (){
    int A, B;
    scanf("%d %d", &A, &B);
    sum(A, B);
    return 0;
}