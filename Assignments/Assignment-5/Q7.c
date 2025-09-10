//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",(2*(n-i)+2));
    }
    return 0;

}