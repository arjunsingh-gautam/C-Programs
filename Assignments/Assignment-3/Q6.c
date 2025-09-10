//Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st no:");
    scanf("%d",&num1);
    printf("Enter 2nd no:");
    scanf("%d",&num2);
    if(num1>num2){
        printf("num1(%d) is greater than num2(%d)",num1,num2);
    }
    else if(num1==num2){
        printf("Both number are equal and have value %d",num1);
    }
    else{
        printf("num2(%d) is greater than num1(%d)",num2,num1);
    }
    return 0;
    
}