// Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter a three digit number:");
    scanf("%d", &num);
    sum = ((num / 100) + ((num / 10) % 10) + (num % 10));
    printf("The sum of digits is: %d", sum);
    return 0;
}