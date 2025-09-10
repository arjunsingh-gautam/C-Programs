//Create a function to swap values of var using pointer
//Appn of  Pointer
// Here we study call by reference,here pass address as arguments to a function
#include<stdio.h>
void swap(int*p,int*q);
int main()
{
    int a=4,b=5,*p,*q;
    p=&a,q=&b;
    printf("Before Swap: a=%d,b=%d\n",a,b);
    printf("Address of a:%d\n",p);
    printf("Address of b:%d\n",q);
    swap(&a,&b); // call by reference/address
    printf("After swap: a=%d,b=%d\n",a,b);
    printf("Address of a ():%d\n",&a);
    printf("Address of b ():%d\n",&b);
    return 0;

}
void swap(int*p,int*q){
    int t;
    t=*p;
    *p=*q;
    *q=t;  
}