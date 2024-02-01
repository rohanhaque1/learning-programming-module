#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    if (n != m)
    {
        flag = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not unit matrix");
    }

    return 0;
}