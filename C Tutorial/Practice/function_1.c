#include <stdio.h>

int sum(int x, int y)
{
    int result = x + y;
    return result;
}
int main (){
    printf("%d", sum(40, 30));
    return 0;
}