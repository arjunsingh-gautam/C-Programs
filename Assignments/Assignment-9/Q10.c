/* 10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN) */
#include<stdio.h>
void prime(int);
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Prime Factors of %d:",num);
    prime(num);
}
void prime(int x){
    while(x%2==0){
        printf("%d,",2);
        x/=2;
    }
    for(int i=3;i*i<=x;i+=2){
        while(x%i==0){
            printf("%d,",i);
            x/=i;
        }
    }
    if(x>2){
        printf("%d,",x);
    }

}