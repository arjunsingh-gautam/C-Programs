/* write a program to calculate sum of square of first n natural numbers */
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter how many natural numbers square sum you want:");
    scanf("%d", &n);
    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    printf("Sum of square first %d natural number is %d", n, sum);
    return 0;
}