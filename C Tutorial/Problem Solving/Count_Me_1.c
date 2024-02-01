#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int dvdTwo = 0, dvdThree = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] % 3 == 0)
        {
        dvdTwo++;
        }
        else if(a[i] % 2 == 0)
        {
        dvdTwo++;
        }
        else if(a[i] % 3 == 0)
        {
        dvdThree++;
        }
    }
    printf("%d %d", dvdTwo, dvdThree);
    return 0;
}