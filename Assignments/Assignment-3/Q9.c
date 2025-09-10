//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    float num1,num2,num3,max;
    printf("Enter the value of num1:");
    scanf("%f",&num1);
    printf("Enter the value of num2:");
    scanf("%f",&num2);
    printf("Enter the value of num3:");
    scanf("%f",&num3);
    if(num1>num2){
        max=num1;
    }

    else {
        max=num2;
    }
    if(max>num3){
        printf("%f is maximum",max);
    }
    else{
        printf("%f is maximum",num3);
    }
    return 0;
}