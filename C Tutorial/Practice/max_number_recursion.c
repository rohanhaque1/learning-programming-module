#include <stdio.h>
#include <limits.h>

int max_number(int n, int a[], int i)
{
    if(i == n)
        return INT_MIN;
    int max = max_number(n, a, i + 1);
    if (a[i] > max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = max_number(n, a, 0);
    printf("%d", max);
    return 0;
}