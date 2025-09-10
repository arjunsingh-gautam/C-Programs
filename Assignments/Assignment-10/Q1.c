/* 1. Write a function to calculate LCM of two numbers. (TSRS) */
#include<stdio.h>
int lcm(int,int);
int main()
{
    int num1,num2,l;
    printf("Enter two numbers:");
    scanf("%d,%d",&num1,&num2);
    l=lcm(num1,num2);
    printf("LCM of %d and %d is %d",num1,num2,l);
}
int lcm(int x,int y){
    int max,min,i;
    if(x>y){
        max=x;      
        min=y;
    }
    else{
        max=y;
        min=x;
    }
    if (max%min==0){
        return min;
    }
    else{
        i=max+1;
        while(1){
            if((i%min==0) && (i%max==0)){
                return i;
            }
            i++;
        }
    }
    
}