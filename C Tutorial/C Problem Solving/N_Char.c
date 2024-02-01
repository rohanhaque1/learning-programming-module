/**
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
inputCopy
a
outputCopy
A
inputCopy
A
outputCopy
a
**/

#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 'a' && X <= 'z')
    {
        int result = X - 32;
        printf("%c", result);
    }
    else if (X >= 'A' && X <= 'Z')
    {
        int result = X + 32;
        printf("%c", result);
    }
    return 0;
}