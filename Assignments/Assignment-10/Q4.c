/* 4.Write a function to find the next prime number of a given number. (TSRS) */
#include<stdio.h>
int next_prime(int);
int isPrime(int);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("The next prime number of a given number %d is:%d",num,next_prime(num));

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
int next_prime(int n){
    int i=n+1;
    while(1){
        if(isPrime(i)==1){
            return i;
        }
        i++;
    }
}