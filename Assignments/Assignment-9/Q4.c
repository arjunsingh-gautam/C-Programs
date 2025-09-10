/* 4. Write a function to print first N natural numbers (TSRN) */

#include<stdio.h>
void print_num(int);
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    print_num(n);
}
void print_num(int x)
{
    int i=1;
    while (i<=x){
        printf("%d,",i);
        i++;
    }
}