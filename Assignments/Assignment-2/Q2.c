// Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The number without last digit is: %d", (num / 10));
    return 0;
}