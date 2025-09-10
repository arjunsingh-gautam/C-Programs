// Program to calculate sum of two numbers
#include <stdio.h>
int main()
{
    int num_1, num_2, sum;
    printf("Enter the value of first number:");
    scanf("%d", &num_1); // %d is used as format specifier which holds the place for a int value
    printf("Enter the value of second number:");
    scanf("%d", &num_2); // & --> is a unary operator in C and points to the address of the variable it is being used for
    sum = num_1 + num_2;
    printf("The sum of %d and %d is %d", num_1, num_2, sum);
    return 0;
}
