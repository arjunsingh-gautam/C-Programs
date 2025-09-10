// void pointer: Pointer that can hold address of any type
#include<stdio.h>
int main()
{
    void *p,*q;
    int x;
    float y;
    p=&x;
    q=&y;
    // Deferencing: Void pointer cannot be deference directly they need to be type cast first
    *(int*)p=10;
    *(float*)q=3.4;
    printf("x=%d and y=%.1f",x,y);
}