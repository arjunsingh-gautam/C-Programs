/* 8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS) */
#include<stdio.h>
int permutation(int,int);
int main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d%d",&n,&r);
    printf("the number of arrangements one can make from %d items and %d selected at a time:%d",n,r,permutation(n,r));
}
int factorial(int x) 
{
    int i=1;
    int f=1;
    while(i<=x){
        f=f*i;
        i++;
    }
    return f;
}
int permutation(int x,int y)
{
    return ((factorial(x))/(factorial(x-y)));

}