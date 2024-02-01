/**
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
Example
inputCopy
5 10
outputCopy
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
**/

#include <stdio.h>

int main (){
    long long int X, Y;
    scanf("%lld %lld", &X, &Y);
    long long int Sum = X + Y;
    long long int Multiplication = X * Y;
    long long int Substraction = X - Y;
    printf("%lld + %lld = %lld\n", X, Y, Sum);
    printf("%lld * %lld = %lld\n", X, Y, Multiplication);
    printf("%lld - %lld = %lld\n", X, Y, Substraction);
    return 0;
}