//Dangling Pointer --> points to the address which has been deleted
#include <stdio.h>
#include <stdlib.h>

int *getDanglingPointer() {
    int localVar = 20;
    int *ptr = &localVar;   // ptr points to localVar
    return ptr;
}

int main() {
    int *danglingPtr = getDanglingPointer();

    // localVar is out of scope here, danglingPtr is now a dangling pointer
    // Accessing or dereferencing danglingPtr here is unsafe
    *danglingPtr = 30;   // Dangling pointer usage

    printf("Value at danglingPtr: %d\n", *danglingPtr);

    return 0;
}
