// #include <stdio.h>
// #include <string.h>

// int main (){
//     char str[1001];
//     scanf("%s", &str);
//     char str2[1001];
//     strcpy(str2, str);
//     int i = 0, j = strlen(str2) - 1;
//     while (i < j)
//     {
//         char temp = str2[i];
//         str2[i] = str2[j];
//         str2[j] = temp;
//         i++;
//         j--;
//     }
//     if(strcmp(str, str2) == 0)
//     {
//         printf("Palindrom\n");
//     }
//     else
//     {
//         printf("Not palindrom\n");
//     }
    

//     return 0;
// }

#include <stdio.h>
int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + count(n / 10);
    }
}
int main (){
    count(5);
    return 0;
}