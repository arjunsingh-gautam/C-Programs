//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    float num;
    printf("Enter the number:");
    scanf("%f",&num);
    if(num>0){
        printf("%.2f is a positive no.",num);
    }
    else if(num==0){
        printf("%.2f is equal to zero.",num);
    }
    else{
        printf("%.2f is a negative no.",num);
    }
    return 0;

}