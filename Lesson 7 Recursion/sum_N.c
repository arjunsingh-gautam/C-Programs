// Recursive solution to find sum of N natural numbers:
#include<stdio.h>
int sum(int);
int main()
{
    int n,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
    result=sum(n);
    printf("The sum of %d natural numbers is %d",n,result);
    return 0;
}

int sum(int n)
{
    int s;
    if (n==1){
        return 1;
    }
    s=n+sum(n-1);
    return s;
}