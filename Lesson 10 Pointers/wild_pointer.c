//wild pointer --> use not recommended lead to illegal memory access or undefined behavior
#include <stdio.h>

int main() {
    int *ptr;  // Uninitialized pointer
    *ptr=5;
    // Attempting to dereference ptr
    printf("Address of ptr:%d\n",ptr);
    printf("Value at ptr: %d\n", *ptr);

    return 0;
}
