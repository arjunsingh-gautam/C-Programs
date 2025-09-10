//Q8.Write a program to find next Prime number of a given number
#include <stdio.h>
int isPrime(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int l=num+1;
    
    while(1){
        if(isPrime(l)){
            printf("Next prime number after %d is:%d",num,l);
            break;
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