// In this code we will learn about #define Preprocessor directive used to define Macros
#include<stdio.h>
#define PI 3.14
#define AREA(r) PI*(r)*(r)
int main()
{
    printf("Area of a circle of radius 7 is:%f",AREA(7));
}