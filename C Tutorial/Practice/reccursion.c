// #include <stdio.h>

// void fun(int a[], int n, int i)
// {
//     if (i == n)
//         return;
//     printf("%d\n", a[i]);
//     fun(a, n, i + 1);
//     printf("Rohan Haque\n");
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &a[i]);
//     }
//     fun(a, n, 0);
//     return 0;
// }

// #include <stdio.h>

// void fun(int i)
// {
//     if(i == 4)
//         return;
//     fun(i + 1);
//     printf("%d\n", i);
// }

// int main (){
//     fun(1);
//     return 0;
// }

#include <stdio.h>

int fun(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int l = fun(a, i+1);
    return l + 1;
}

int main()
{
    char a[] = "Rohan";
    int len = fun(a, 0);
    printf("%d\n", len);
    return 0;
}