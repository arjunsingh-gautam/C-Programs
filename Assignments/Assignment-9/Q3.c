/* 3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS) */

#include<stdio.h>
int check(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(check(num)==1){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}
int check(int x){
    if (x%2==0){
        return 1;
    }
    else{
        return 0;
    }
}