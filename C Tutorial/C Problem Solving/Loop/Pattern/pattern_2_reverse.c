/**
Given a number N. Print the N number pattern in reverse way.

Sample Input -
5

Sample Output -
* * * * *
* * * *
* * *
* *
*

**/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int row = N; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}