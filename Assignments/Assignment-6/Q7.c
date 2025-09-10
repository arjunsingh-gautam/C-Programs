//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int digits=0;
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int num1 =num;
    while(num1!=0){
        num1=num1/10;
        digits=digits+1;
    }
    printf("The number of digits in %d is %d",num,digits);
    return 0;
}