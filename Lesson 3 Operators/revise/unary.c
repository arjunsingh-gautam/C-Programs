#include<stdio.h>
int main()
{
    int a =9;
    int b=9;
    int *ptr=&a;
    int z;
    z=++a;
    printf("%d\n%d\n",z,a);
    z=b++;
    printf("%d\n%d\n",z,b);
    printf("%d bytes",sizeof(ptr));

}