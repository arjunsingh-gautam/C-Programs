//Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%2==0){
        printf("%d is even no.",num);
    }
    else{
        printf("%d is odd no.",num);
    }
    return 0;
}