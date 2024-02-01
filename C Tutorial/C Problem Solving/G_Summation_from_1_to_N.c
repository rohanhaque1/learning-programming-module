/**
Given a number N
. Print the summation of the numbers that is between 1 and N
 (inclusive).

.∑i=1Ni
Input
Only one line containing a number N
 (1≤N≤109)
Output
Print the summation of the numbers that are between 1 and N
 (inclusive).

Examples
inputCopy
3
outputCopy
6
inputCopy
10
outputCopy
55
**/

#include <stdio.h>

int main()
{
    long long N;
    scanf("%lld", &N);

    long long summation = (N * (N + 1)) / 2;

    printf("%lld\n", summation);

    return 0;
}