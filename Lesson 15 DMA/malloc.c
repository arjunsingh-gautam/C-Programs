#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(4);  // Create a block of size 4bytes which can store an int value
    /* 
    malloc(size_of_block): 
    - return a void pointer to the block created
    - Type of block can be defined by assigning it to specific pointer and type casting the malloc block 
    - if block not created return a NULL pointer;
    - if block not initialised it contains a garbage value
    */
    *ptr=45;
    printf("Address of memory created using malloc():%p\n",ptr);
    printf("Value store in the memory:%d",*ptr);
    return 0;

}