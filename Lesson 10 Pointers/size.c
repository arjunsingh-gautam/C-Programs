//Size of a pointer variable
// All pointer variable of any type has size-->8byte
#include<stdio.h>
int main()
{
    int *p;
    char *q;
    printf("Size of pointer var p:%d byte\n",sizeof(p));
    printf("Size of pointer var q:%d byte",sizeof(q));
    return 0;
}