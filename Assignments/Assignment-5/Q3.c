//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",(n-i+1));
    }
    return 0;

}