// Write a program to check whether a given number is positive of negative using ternary operator
#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    num > 0 ? printf("%f is positive\n", num) : printf("%f is non-positive\n", num);
    return 0;
}