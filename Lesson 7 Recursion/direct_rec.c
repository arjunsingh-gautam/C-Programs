// In this program we will learn about direct recursion and non-tail recursion:

/*
Direct Recursion: In direct recursion the function call itself directly
Non-Tail Recursion: It is type of recursion in which recursive call is not the last operation
*/
#include <stdio.h>
int factorial(int);
int main()
{
    int result, num;
    printf("Enter a number:");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial of %d is:%d", num, result);
    return 0;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Here factorial calls itself directly and it is also an examplae of non tail recursion since recursive call is not the last operation multiplication with n is also an operation after it.
    }
}