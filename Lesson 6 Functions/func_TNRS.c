#include<stdio.h>
int add();
int main()
{
    printf("Sum is %d",add());
    return 0;
}

int add()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d\t%d",&a,&b);
    c=a+b;
    return c;
}