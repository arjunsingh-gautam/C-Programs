//Pointer to array demonstration
#include<stdio.h>
int main()
{
    int(*p)[4];// p is pointing to an array of size 16 bytes(4 int blocks) lets assume having address value=100
    // p+2 ---> points to to an  array of of size 16 bytes(4 int blocks) of address=132
    int a[5][4];
    //Now assign value 10 to a[2][2] using the pointer
    p=a;
    (*(p+2))[2]=10;
    printf("Value of a[2][2]:%d\n",a[2][2]);
    //Assigning 15 to a[3][3]
    *(*(p+3)+3)=15;
    printf("Value of a[3][3]:%d\n",a[3][3]);
    //Assigning 20 to a[4][1]
    *(p[4]+1)=20;
    printf("Value of a[4][1]:%d\n",a[4][1]);
    //Assigning value 53 to a[1][3]
    p[1][3]=53;
    printf("Value of a[1][3]:%d\n",a[1][3]);

}