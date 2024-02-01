#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int len = strlen(S) - 1;
    int i = 0;
    while (len > i)
    {
        if (S[len] != S[i])
        {
            return 0;
        }
        len--;
        i++;
    }
    return 1;
}

int main()
{
    char S[1001];
    scanf("%s", &S);
    int result = is_palindrome(S);
    if (result)
    {
        printf("Palindrome\n");
    }
    else
        printf("Not Palindrome\n");
    return 0;
}