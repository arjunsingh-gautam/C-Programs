// Write a program to check whether a given number is positive of negative uding only if-else

#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num <= 0)
    {
        printf("%.1f is non-positive\n", num);
    }
    else
    {
        printf("%.1f is positive\n", num);
    }

    return 0;
}
