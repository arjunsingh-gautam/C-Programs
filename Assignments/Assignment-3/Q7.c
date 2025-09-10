//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
#include <math.h> // Include the math library for sqrt and other functions

int main()
{
    float a,b,c,D;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    D = b*b - 4*a*c;
    if(D>0){
        printf("Roots are real and distinct");
    }
    else if(D==0){
        printf("Roots are real and equal");
    }
    else{
        printf("Roots are imaginary");
    }
    return 0;
    
}