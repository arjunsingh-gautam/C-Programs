//Write a program to find the Nth term of the Fibonnaci series.
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
    while (count<term){
        if (term==1){
            printf("%d term of fibonacci series is 0",term);
            break;
        }
        if (term==2){
            printf("%d term of fibonacci series is 1",term);
            break;
        }
        
        n_th=num_1+num_2;
        num_1=num_2;
        num_2=n_th;
        count++;
    }
    printf("%d term of fibonacci series is %d",term,n_th);

}