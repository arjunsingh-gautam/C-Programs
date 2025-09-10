/* 2. Write a function to calculate HCF of two numbers. (TSRS) */
#include<stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2,h;
    printf("Enter two numbers:");
    scanf("%d,%d",&num1,&num2);
    h=hcf(num1,num2);
    printf("HCF of %d and %d is %d",num1,num2,h);
}
int hcf(int x,int y)
{
    int i=2;
    int max,min;
     if(x>y){
        max=x;      
        min=y;
    }
    else{
        max=y;
        min=x;
    }
    while(i<=(max/2))
    {
        if(max%i==0 && min%i==0){
            return i;
        }
        
        i++;
    }
    return 1;
}