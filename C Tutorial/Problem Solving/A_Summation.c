#include <stdio.h>

int main()
{
    long long int n, sum=0;
    scanf("%lld\n", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld ", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (sum < 0)
    {
        printf("%lld\n", sum * -1);
    }
    else
    {
        printf("%lld\n", sum);
    }

    return 0;
}