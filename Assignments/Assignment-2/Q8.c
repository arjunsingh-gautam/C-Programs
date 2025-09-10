// Write a program to check whether the given number is even or odd using a bitwise operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (!(num & 1)) // check the LSB of num is 1 or 0 if 0--> num even if 1--> num odd
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }

    return 0;
}