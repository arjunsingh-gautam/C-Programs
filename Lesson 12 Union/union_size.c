#include<stdio.h>
int main()
{
    union Data{
        int i;
        float f;
        char str[20];
    };
    printf("Size of Union:%d",sizeof(union Data));// Size of Union= Size of largest element in Union
}

/* 
Output:
Size of Union:20 
*/