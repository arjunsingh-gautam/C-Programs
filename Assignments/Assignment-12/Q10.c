/* 10. Write a program in C to calculate the power of any number using recursion. */
#include<stdio.h>
int power(int,int);
int main()
{
    int num,p;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&p);
    printf("%d to power %d is:%d",num,p,power(num,p));
    return 0;
}
int power(int a,int b){
    if (b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}