//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int sum=0;
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        sum +=(i*i*i);
        i++;
    }
    printf("The sum of cube of first %d natural numbers is %d",n,sum);
}