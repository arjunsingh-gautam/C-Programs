// Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swap values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
