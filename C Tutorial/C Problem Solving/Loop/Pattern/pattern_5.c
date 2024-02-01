/**
Given a number N. Print the N number Alphabatic pattern.

Sample Input -
5

Sample Output -
A
B B
C C C
D D D D
E E E E E
**/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int row = 1; row <= N; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", row + 64);
        }
        printf("\n");
    }
    return 0;
}