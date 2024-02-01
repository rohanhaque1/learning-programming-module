/**
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples
inputCopy
4569
outputCopy
EVEN
inputCopy
3569
outputCopy
ODD
Note
Second Example :

In 3569 the first digit is 3 and its ODD.
**/

#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    int first_digit = X / 1000;
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}