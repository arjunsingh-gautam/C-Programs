//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int sum=0;
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        sum +=(2*i-1);
        i++;
    }
    printf("The sum of first %d odd numbers is %d",n,sum);
}