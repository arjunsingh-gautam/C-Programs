/* 6. Write a function to calculate the factorial of a number. (TSRS) */
#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
}
int factorial(int x) 
{
    int i=1;
    int f=1;
    while(i<=x){
        f=f*i;
        i++;
    }
    return f;
}