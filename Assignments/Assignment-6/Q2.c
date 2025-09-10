//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int sum=0;
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        sum +=2*i;
        i++;
    }
    printf("The sum of first %d even numbers is %d",n,sum);
}