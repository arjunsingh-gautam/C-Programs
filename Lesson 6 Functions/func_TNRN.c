#include<stdio.h> // has function declaration of predefined functions
void add(); // function prototype/declaration
int main()
{
    add(); // function call
    return 0;
}

void add() // function definition
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}