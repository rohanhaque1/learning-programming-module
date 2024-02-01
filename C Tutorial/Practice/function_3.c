#include <stdio.h>

void sum(int x, int y)
{
    int result = x + y;
    printf("%d", result);
}
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    sum(50, 100);
    return 0;
}