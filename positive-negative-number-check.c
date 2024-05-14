// 05. Write C Program to check weather a given number positive or negative.

#include<stdio.h>

int main()
{
    int number;
    printf("Enter an integer number : ");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("Wow! %d is positive number.\n", number);
    }
    else if(number < 0)
    {
        printf("Ops! %d is negative number.\n", number);
    }
    else
    {
        printf("%d is Zero.\n", number);
    }

    return 0;
}
