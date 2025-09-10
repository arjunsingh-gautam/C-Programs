/* 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function. */

#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    int sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=factorial(i)/i;
    }
    printf("Sum of series is:%d",sum);
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