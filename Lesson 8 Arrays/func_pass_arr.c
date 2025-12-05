// write a program to pass array to function while calling it by passing by value
#include <stdio.h>
void input(int b[]);
int main()
{
    int a[5];
    input(a); // a: array decays to int *a pointer to first element of array a and stores the address:&a[0]
    printf("a[3] is %d\n", a[3]);
}
void input(int b[]) // int b[] decay to int *b i.e int type pointer which points to first element of array
// int *b also stores the same address therefore original array also get affected.
{
    int i;
    printf("Enter 5 numbers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("b[3] is %d\n", b[3]);
}

// here b & a are pointing to the same array