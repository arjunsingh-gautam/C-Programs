//Write a recursive solution to calculate factorial of n
#include<stdio.h>
int factorial(int);
int main()
{
    int n,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
    result=factorial(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}

int factorial(int n)
{
    if (n==0 || n==1){
        return 1;
    }
    return (n*factorial(n-1));
}