/* 1. Write a function to calculate the area of a circle. (TSRS) */
#include<stdio.h>
float area(int);
int main()
{
    int r;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    printf("Area of circle is:%f",area(r));
}
float area(int x){
    return 3.14*x*x;
}