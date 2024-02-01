// Step-1: Normal Logic
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int result = x / 1000;
    if (result % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}



// Step - 2 : Dynamic Logic 
// *If 4 digit - 1000,
// *If 6 digit - 100000,
// *If 12 digit - 100000000000

// #include <stdio.h>

//         int
//         main(){
//     int x;
//     scanf("%d", &x);
//     int count = 0;
//     while(x != 0)
//     {
//         x /= 10;
//         count++;
//     }
//     // int num = count * 1000 / count;
//     int result = x / count;
//     if(result % 2 == 0)
//     {
//         printf("EVEN");
//     }
//     else
//     {
//         printf("ODD");
//     }
    
//     return 0;
// }



// Step-3: chatGPT
// #include <stdio.h>

// int main()
// {
//     int x;
//     scanf("%d", &x);

//     int firstDigit = x;
//     while (firstDigit >= 10)
//     {
//         firstDigit /= 10;
//     }

//     if (firstDigit % 2 == 0)
//     {
//         printf("EVEN\n");
//     }
//     else
//     {
//         printf("ODD\n");
//     }

//     return 0;
// }