// Explicit enumerator value
#include<stdio.h>
#include<stdlib.h>
enum status{
    allocated=1,not_allocated=0
};
enum status check_memory();
int main()
{
    printf("Check Dynamic Memory Allocated\n");
    if(check_memory())
    {
        printf("Memory is allocated");
    }
    else
    {
        printf("Memory is not allocated");
    }
}
enum status check_memory()
{
    int *p;
    p=(int*)malloc(4);
    if(p!=NULL)
    {
        free(p);
        return allocated;
    }
    else
    {
        return not_allocated;
    }
   

}