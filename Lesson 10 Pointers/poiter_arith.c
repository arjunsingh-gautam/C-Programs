//Pointer arithmatic
// p*q,p/q,p/5,p*3,p+q ---> invalid
// p+1,q-p(both of same type) ----> valid
#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Base Address of var a:%d\n",p);
    printf("Base Address of next int var:%d\n",p+1);
    printf("Base Address of var b:%d\n",q);
    printf("Number of int var between a and b:%d",q-p);
    return 0;
}