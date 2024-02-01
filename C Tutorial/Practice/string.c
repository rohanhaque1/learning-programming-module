// Finding String Length
/* Type-1: Using Library Function
#include <stdio.h>
#include <string.h>

int main (){
    char str[] = "Rohan Haque";
    int len = strlen(str);
    printf("%d", len);
    return 0;
}
*/

/* Type-2: Without Library Function
#include <stdio.h>

int main (){
    char str[] = "Mohaiminul haque Rohan";
    int i = 0, len = 0;
    while(str[i] != '\0')
    {
        i++;
        len++;
    }
    printf("%d", len);
    return 0;
}
*/



// Copy String
/* Type-1: Using Library Function
#include <stdio.h>
#include <string.h>

int main (){
    char str[] = "Rohan Haque";
    char str2[20];
    strcpy(str2, str);
    printf("Source String - %s\n", str);
    printf("Target String - %s\n", str2);
    return 0;
}
*/


// String Concatination
/* Type-1: Using Library Function
#include <stdio.h>
#include <string.h>

int main (){
    char str1[] = "My Name is ";
    char str2[] = "Rohan Haque";
    strcat(str1, str2);
    printf("%s", str1);
    return 0;
}
*/

/* Type-2: Without Libraby Function
#include <stdio.h>

int main (){
    char str1[50] = "My name is ";
    char str2[] = "Rohan Haque";
    int i = 0, j = 0, len1 = 0;
    while(str1[i] != '\0')
    {
        i++;
        len1++;
    }
    while(str2[j] != '\0')
    {
        str1[len1 + j] = str2[j];
        j++;
    }
    printf("%s", str1);
    return 0;
}
*/
