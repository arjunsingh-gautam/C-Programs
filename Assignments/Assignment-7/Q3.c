//Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int num_1=0;
    int num_2=1;
    int n_th;
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num==0 || num==1){
        printf("%d is present in fibonacci sequence",num);
        
        }
  
    while (n_th<num){
      
        
        n_th=num_1+num_2;
        num_1=num_2;
        num_2=n_th;
       
    }
    if(n_th==num){
        printf("%d is present in fibonacci sequence",num);
    }
    else{
        printf("%d is not present in fibonacci sequence",num);
    }

    return 0;

}