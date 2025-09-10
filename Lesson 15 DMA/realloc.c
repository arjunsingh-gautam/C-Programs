#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=18282;
    printf("Address of block:%p\nValue store in block:%d\n",ptr,sizeof(ptr),*ptr);
    ptr=realloc(ptr,8); // change the size of block allocated by malloc to 8bytes
    printf("Address of block after reallocation:%p\nValue store in block:%d\n",ptr,sizeof(ptr),*ptr);

   /*  
   realloc(addresss_of_block,new_size)
    - return a void pointer to same address if block can be modified at same location
    - return a void pointer to different address if block cannot be reallocated at same address
    - copies the value store in block automatically 
    */
}