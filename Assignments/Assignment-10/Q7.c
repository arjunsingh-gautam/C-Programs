/* 7. Write a function to print first N terms of Fibonacci series (TSRN) */
#include<stdio.h>
void fib(int t)
{
    int num_1=0;
    int num_2=1;
    int n_th;
    int count=2;
    if (t==1){
        printf("0");
        
        }
    if (t==2){
        printf("0\n1\n");
        
        }
    if (t>2){
        printf("0\n1\n");
    }
    while (count<t){
      
        
        n_th=num_1+num_2;
        num_1=num_2;
        num_2=n_th;
        printf("%d\n",n_th);
        count++;
    }

}
int main()
{
    int term;
    printf("Enter the number of term:");
    scanf("%d",&term);
    fib(term);
}