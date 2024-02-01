#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[10000];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);
        int found = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}