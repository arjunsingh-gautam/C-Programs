//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,HCF,min,max; 
    int i=1;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    if (num1<num2){
        min=num1;
        max=num2;
    }
    else{
        min=num2;
        max=num1;
    }
    if(max%min==0){
        printf("HCF of %d and %d is %d",num1,num2,min);
        return 0;
    }
    else{
        while(i<min){
            if(max%i==0 && min%i==0){
                HCF=i;
            }
            i++;
        }
        printf("HCF of %d and %d is %d",num1,num2,HCF);
    }
    
}