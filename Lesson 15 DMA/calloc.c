#include<stdio.h>
#include<stdlib.h> // We can't dma functions like malloc and calloc without including <stdlib>
int main()
{
    float *ptr=(float *)calloc(4,8); // create for contiguous blocks of 8 byte 

  /*   
  calloc(no_of_blocks,size_of_blocks):
    - create contiguous blocks with the size mention like an array
    - Initialise each byte with zero
    - return a void pointer like malloc to the base address 
    - each block can be accessed using pointer arithmatic
    - return a NULL pointer if memory not allocated 
    */
    *ptr=8.56;
    *(ptr+1)=9.03;
    *(ptr+2)=9.30;
    *(ptr+3)=9.01;
    for(int i=0;i<4;i++)
    {
        printf("Value store at block-%d is:%f\n",i+1,*(ptr+i));
    }

}