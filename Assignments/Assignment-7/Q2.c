//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int num_1=0;
    int num_2=1;
    int n_th;
    int term;
    int count=2;
    printf("Enter the number of term:");
    scanf("%d",&term);
    if (term==1){
        printf("0");
        
        }
    if (term==2){
        printf("0\n1\n");
        
        }
    if (term>2){
        printf("0\n1\n");
    }
    while (count<term){
      
        
        n_th=num_1+num_2;
        num_1=num_2;
        num_2=n_th;
        printf("%d\n",n_th);
        count++;
    }
    return 0;

}