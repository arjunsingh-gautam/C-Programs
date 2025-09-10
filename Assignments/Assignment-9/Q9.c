/* 9.Write a function to check whether a given number contains a given digit or not.
(TSRS) */
#include<stdio.h>
int digit_check(int,int);
int main()
{
    int num,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the digit:");
    scanf("%d",&digit);
    if (digit_check(num,digit)==1){
        printf("%d is the digit of %d",digit,num);
    }
    else{
        printf("%d is not the digit of %d",digit,num);
    }

}
int digit_check(int x,int y){
    int curr_num=0;
    int new;
    while(x!=0){
        curr_num=x%10;
        if(curr_num==y){
            return 1;
        }
        x=x/10;
    }
    return 0;
}