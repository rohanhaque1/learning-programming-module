/**
Given a number N. Print the N number binary pattern.

Sample Input -
5

Sample Output -
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1
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
            printf("%d ", row % 2);
        }
        printf("\n");
    }
    return 0;
}