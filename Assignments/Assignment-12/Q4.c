/* Write a recursive function to calculate sum of squares of first n natural numbers */
#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter the value of n:");
    scanf("%d",&num);
    printf("Sum of squares of first %d natural numbers is %d",num,sum(num));
    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    else{
        return (n*n)+sum(n-1);
    }

}