#include<stdio.h>
int add(int a,int b);  // function declaration
int main()
{
    int result;
    result= add(3,4); // function call
    return 0;
}
int add(int a,int b) // function definition
{
    printf("Sum of 3 and 4 is %d",(a+b));
}