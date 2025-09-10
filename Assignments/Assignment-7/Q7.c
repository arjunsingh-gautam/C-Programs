//Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int isPrime(int);
int main()
{
    int num1,num2;
    int min,max;
    printf("Enter the numbers btw which you want the prime numbers:");
    scanf("%d%d",&num1,&num2);
    max=num1>num2?num1:num2;
    min=num1<num2?num1:num2;
    printf("Prime numbers btw %d and %d are:\n",num1,num2);
    int l=min+1;
    while(l<num2){
        if(isPrime(l)){
            printf("%d,",l);
        }
       
        l++;

    }
    
    return 0;
}
int isPrime(int a){
    if(a<=1){
        return 0;
    }
    int i=2;
    while(i<=a/2){
        if(a%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}