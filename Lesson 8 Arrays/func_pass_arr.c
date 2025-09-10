//write a program to pass array to function while calling it
#include<stdio.h>
void input(int b[]);
int main()
{
    int a[5];
    input(a);
    printf("a[3] is %d\n",a[3]);
}
void input(int b[])
{
    int i;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("b[3] is %d\n",b[3]);
}

// here b & a are pointing to the same array