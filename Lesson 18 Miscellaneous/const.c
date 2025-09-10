// In this program we will learn about const keyword in C
#include <stdio.h>
int main()
{
    const int x=5;
    int y;
    // x++ Error since now x identifier is const and can't be used to make changes to x
    printf("x=%d\n",x);
    int *p;
    p=&x;
    ++(*p);
    printf("x=%d\n",*p);// Output:6 since pointer is not pointing to a const variable  so can be used to modify location
    const int *q=&x; // Pointer is pointing to a const type can't be used to modify value now
    // ++(*q) will give error
    printf("x=%d\n",*q);
    int * const l=&x; // Here l is a const pointer means we can reassign it with new address but  It can still be used to modify the address it is pointing since it is not pointing variable of const type
    // l=&y; // error
    ++(*l);
    printf("x=%d\n",*l);
    const int * const m=&x; // Here m is a const type pointer pointing to const type variable there we cannot change address stored in m and also cannot modify the value of address using m
    // m=&y // error
    // ++(*m) error
    printf("x=%d\n",*m);
}