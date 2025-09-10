#include<stdio.h>
void add(int a,int b);
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d\t%d",&a,&b);
    add(a,b);
    return 0;
}

void add(int x,int y)
{
    int c;
    c=x+y;
    printf("Sum is %d",c);
}