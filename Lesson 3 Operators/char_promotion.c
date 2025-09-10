#include <stdio.h>
int main()
{
    char a=100,b=50;
    int result=a+b; // char value are promoted to int type for addition
    printf("Value of result=%c in char and in integer is %d",result,result);
    return 0;
}