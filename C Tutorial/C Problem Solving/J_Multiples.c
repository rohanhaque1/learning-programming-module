/**
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.

Examples
inputCopy
9 3
outputCopy
Multiples
inputCopy
6 24
outputCopy
Multiples
inputCopy
12 5
outputCopy
No Multiples
**/

#include <stdio.h>

int main (){
    int A, B;
    scanf("%d %d", &A, &B);
    if(A % B == 0 || B % A == 0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }
    
    return 0;
}