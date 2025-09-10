/* 9. Write a program in C to count the digits of a given number using recursion. */
#include<stdio.h>
int count(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Number of digits in %d is %d",num,count(num));
    return 0;
}
int count(int n){
    if (n==0){
        return 0;
    }
    else{
        return 1+count(n/10);
    }
}