//Q6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int isPrime(int);
int main()
{
    int l=1;
    while(l<101){
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