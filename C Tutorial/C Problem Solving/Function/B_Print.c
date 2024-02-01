#include <stdio.h>

void fun(int X)
{
    for (int i = 1; i <= X; i++)
    {
        printf("%d", i);
        if(i < X)
        {
            printf(" ");
        }
    }
}

int main (){
    int N;
    scanf("%d", &N);
    fun(N);
    return 0;
}