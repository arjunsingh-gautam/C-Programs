//Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main(){
    float num;
    printf("Enter the number:");
    scanf("%f",&num);
    if (num>=0){
        printf("%f is positive",num);
    }
    else{
        printf("%f is non-positive",num);
    }
    return 0;
}