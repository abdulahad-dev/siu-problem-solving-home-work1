// 06. Write C Program to accept two integers and check weather a number equal or not.

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    if(num1 == num2)
    {
        printf("Wow! The numbers %d and %d are equal.\n", num1, num2);
    }
    else
    {
       printf("Ops! The numbers %d and %d are not equal.\n", num1, num2);
    }

    return 0;
}
