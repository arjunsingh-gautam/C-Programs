// write a recursive solution to print first n natural numbers
#include<stdio.h>
void number(int);
int main()
{
    int n,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
    number(n);
    return 0;
}

void number(int n)
{
    if (n>0){
        number(n-1);
        printf("%d,",n);
    }
}