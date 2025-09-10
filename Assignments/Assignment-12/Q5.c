/* Write a recursive function to calculate sum of digits of a given number */
#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Sum of the digits of %d is %d",num,sum(num));
    return 0;
}
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n%10)+sum(n/10);
    }
}
