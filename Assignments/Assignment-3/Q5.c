//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    //if(99<num<1000) wrong condition-->
    //The expression 99<num<1000 does not do what you expect in C. Instead, it will first evaluate 99<num, which results in either 0 (false) or 1 (true), and then compare that result with 1000, which will always be true except when num is 99.
    
    if(num>99 && num<1000){
        printf("%d is a three digit no.",num);
    }
    else{
        printf("%d is not a three digit no.",num);
    }
    return 0;
}