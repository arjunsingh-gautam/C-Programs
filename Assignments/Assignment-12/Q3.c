/* 3. Write a recursive function to calculate sum of first N even natural numbers */
#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter the value of n:");
    scanf("%d",&num);
    printf("Sum of first %d even numbers is %d",num,sum(num));
    return 0;
}
int sum(int n){
    if (n==1){
        return 2;
    }
    else{
        return (2*n)+sum(n-1);
    }

}