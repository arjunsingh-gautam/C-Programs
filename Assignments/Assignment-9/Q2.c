/* 2. Write a function to calculate simple interest. (TSRS) */

#include<stdio.h>
float interest(float,float,float);
int main()
{
    float P,r,t;
    printf("Enter the Principal Amt.,Interest Rate,Time Period:");
    scanf("%f,%f,%f",&P,&r,&t);
    printf("Simple Interest Amt:%.2f",interest(P,r,t));
    return 0;
}
float interest(float x,float y,float z){
    return (x*y*z*0.01);
}