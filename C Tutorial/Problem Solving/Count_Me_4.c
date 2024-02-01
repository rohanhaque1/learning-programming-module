// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[10001];
//     scanf("%s", str);
//     int count[26] = {0};
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             int val = str[i] - 'a';
//             count[val]++;
//         }
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (count[i] > 0)
//         {
//             printf("%c - %d\n", 'a' + i, count[i]);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char S[10001];
    scanf("%s", S);
    int count = 0;
    for (int i = 0; i < strlen(S); i++)
    {
        int value = S[i] - 'a';
        printf("%d ", value);
    }
    return 0;
}