// Write C Program to perform Arithmetic Operation.
// +, -, *, /, %, ++, --

#include<stdio.h>

int main()
{
    int x = 7, y = 3;

    printf("Summation is : %d\n", x + y);
    printf("Subtraction is : %d\n", x - y);
    printf("Multiplication is : %d\n", x * y);
    printf("Division is : %d\n", x / y);
    printf("Modulus is : %d\n", x % y);

    printf("Increment value is : %d\n", ++x);
    printf("Decrement value is : %d\n", --y);

    return 0;
}
