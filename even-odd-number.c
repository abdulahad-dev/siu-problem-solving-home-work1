// 04. Write C Program to check weather a given number even or odd

#include<stdio.h>

int main()
{
    int number;
    printf("Enter an integer number : ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("Wow! %d is even number\n", number);
    }
    else
    {
        printf("Ops! %d is odd number\n", number);
    }

    return 0;
}
