/* 7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS) */
#include<stdio.h>
int factorial(int);
int selection(int,int);
int main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d%d",&n,&r);
    printf("the number of combinations one can make from %d items and %d selected at a time:%d",n,r,selection(n,r));
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
int selection(int x,int y)
{
    return ((factorial(x))/(factorial(y)*factorial(x-y)));

}