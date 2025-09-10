//Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num&1){
        printf("%d is odd no.",num);
    }
    else{
        printf("%d is even no.",num);            
    }
    return 0;
}