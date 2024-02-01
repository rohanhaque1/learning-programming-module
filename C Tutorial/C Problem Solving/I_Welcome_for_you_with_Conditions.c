/**
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.

Examples
inputCopy
10 9
outputCopy
Yes
inputCopy
5 5
outputCopy
Yes
inputCopy
5 7
outputCopy
No
 **/

#include <stdio.h>

int main (){
    int A, B;
    scanf("%d %d", &A, &B);
    if(A >= B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}