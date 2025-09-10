#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=8382;
    printf("Address of memory:%p\nValue store in block:%d\n",ptr,*ptr);
    free(ptr); // Release the dynamically allocated memory from heap
    // Now ptr becomes a Dangling Pointer and points to a memory address which would be having a garbage value
    printf("Address of memory:%p\nValue store in block:%d\n",ptr,*ptr);

    /* 
    free(address_of_memory)
    - free the DMA memory space from heap
    - We have manually free the space 
    - Helps to prevent memory leak in code 
    */
}