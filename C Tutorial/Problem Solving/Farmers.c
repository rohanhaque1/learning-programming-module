#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int M1, M2, Days;
        scanf("%d %d %d", &M1, &M2, &Days);
        int m3 = M1 + M2;
        int Total_Days = Days * M1 / m3;
        int Days_Left = Days - Total_Days;
        printf("%d\n", Days_Left);
    }

    return 0;
}