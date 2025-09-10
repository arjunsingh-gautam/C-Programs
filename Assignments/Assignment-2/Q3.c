// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int num1, num2, swap;
    printf("Enter value of num1:");
    scanf("%d", &num1);
    printf("Enter value of num2:");
    scanf("%d", &num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("The value of num1 is %d and num2 is %d after swapping", num1, num2);
    return 0;
}