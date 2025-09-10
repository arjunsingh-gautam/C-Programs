// Write a program to check whether a given number is positive of negative uding only if

#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num > 0)
    {
        printf("%f is positive\n", num);
    }
    if (num <= 0)
    {
        printf("%f is non-positive\n", num);
    }

    return 0;
}
