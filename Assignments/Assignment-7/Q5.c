//Write a program to check whether two given numbers are co-prime numbers or not
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
        
    }
    if (HCF==1){
        printf("%d and %d are co-prime numbers",num1,num2);
    }
    return 0;
}