// #include <stdio.h>

// int main()
// {
//     int x = 100;
//     int *ptr = &x;
//     // printf("x er address - %p\n", &x);
//     // printf("ptr er value - %p\n", ptr);
//     // printf("ptr er address - %p\n", &ptr);

//     // dereference
//     // x = 200;
//     // printf("x er present value - %d\n", x);
//     // printf("ptr er present value - %d\n", *ptr);
//     return 0;
// }

// // call/pass by value
// #include <stdio.h>

// void fun(int x)
// {
//     int result = x;
//     // printf("%d", result);
//     result = 50;
//     printf("%d", result);

// }

// int main (){
//     int x = 100;
//     fun(x);
//     x = 300;
//     return 0;
// }

// // call/pass by reference
// #include <stdio.h>

// void fun(int *ptr)
// {
//     // printf("ptr er value - %d", *ptr);
//     *ptr = 40;
//     printf("ptr er present value - %d\n", *ptr);
// }

// int main()
// {
//     int x = 10;
//     fun(&x);
//     printf("x er present value - %d\n", x);
//     return 0;
// }

// array and pointer
#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    // printf("0 th index er address - %p\n", &ar[0]);
    // printf("0 th index er address - %p\n", ar);

    // printf("0 th index er value - %d\n", ar[0]);
    // printf("0 th index er value - %d\n", *ar);

    printf("0 th index er value - %d\n", *(ar + 3));
    return 0;
}

