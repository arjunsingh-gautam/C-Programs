#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr=(float *)malloc(sizeof(float));//always use sizeof() operator while creating a block it is best practice and prevents memory errors and makes code portable
    *ptr=3.14382;
    printf("Value store at memory:%f",*ptr);
}