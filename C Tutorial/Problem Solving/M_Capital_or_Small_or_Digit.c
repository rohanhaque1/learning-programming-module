#include <stdio.h>

int main (){
    char x;
    scanf("%c", &x);
    if(x >= '0' && x <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(x >= 'a' && x <= 'z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
        
    }
    
    return 0;
}