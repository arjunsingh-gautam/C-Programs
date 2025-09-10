/* 6. Write a recursive function to calculate factorial of a given number */
#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
    return 0;
}
int fact(int n){
    if (n==1){
        return 1;
    }
    else{
        return (n)*fact(n-1);
    }
}
