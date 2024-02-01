/**
Given a number N. Print the N number Alphabatic pattern.

Sample Input -
5

Sample Output -
A
A B
A B C
A B C D
A B C D E
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
            printf("%c ", col + 64);
        }
        printf("\n");
    }
    return 0;
}