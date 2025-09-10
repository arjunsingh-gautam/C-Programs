#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,result;
    printf("Enter two number:");
    scanf("%d\t%d",&a,&b);
    result=add(a,b);
    printf("Sum is %d",result);
    return 0;
}

int add(int x,int y)
{
    return x+y;
}