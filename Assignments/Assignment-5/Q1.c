//Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d MysirG\n",i);
        i++;

    }
    return 0;
}