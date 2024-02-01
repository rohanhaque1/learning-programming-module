#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        int tiger = 0, pathan = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'T')
            {
                tiger++;
            }
            else if (s[i] == 'P')
            {
                pathan++;
            }
        }
        if (tiger == pathan)
        {
            printf("Draw\n");
        }
        else if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else if (pathan > tiger)
        {
            printf("Pathaan\n");
        }
    }
    return 0;
}