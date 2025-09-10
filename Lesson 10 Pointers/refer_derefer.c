//& ---> reference operator
//* ---> dereference operator

#include<stdio.h>
int main()
{
    int x=5;
    int *j;
    j=&x;
    printf("Referencing\n");
    printf("Address of x: %d\n",&x);
    printf("Address of x: %d\n",j);
    printf("\n");
    printf("Dereferencing\n");
    printf("Value stored at x: %d\n",*&x); //*&x associativity from right to left
    printf("Value stored at x: %d",*j);
}