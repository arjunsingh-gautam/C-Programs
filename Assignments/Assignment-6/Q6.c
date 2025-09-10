//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int factorial=1;
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        factorial *= i;
        i++;
    }
    printf("The factorial of %d  is %d",n,factorial);
    return 0;
}