//Null pointer--> A pointer which is not pointing to any location
// use to as safegaurd to safely access pointer who contain which are not been reserved
#include<stdio.h>
int main()
{
    int *ptr = NULL;
    // int a;
    // ptr=&a;
    // Assume ptr is assigned a value somewhere in the code

    if (ptr != NULL) {
        // Safe to dereference ptr
        *ptr = 10;
        printf("Value at ptr: %d\n", *ptr);
    } else {
        printf("ptr is NULL.\n");
    }
}