/* 3.Write a function to check whether a given number is Prime or not. (TSRS) */
#include<stdio.h>
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
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (isPrime(num)==1){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }

}
