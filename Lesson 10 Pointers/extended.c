//Extended concept of pointer
#include<stdio.h>
int main()
{
int x=5;
int *p; // pointer to ---> int var x
int **q; // pointer to ---> pointer to ---> int var x
int ***r; // pointer to ---> pointer to ---> pointer to ---> int var x
p=&x;
q=&p;
r=&q;
printf("Address of x:%d\n",p);
printf("Address of p:%d\n",q);
printf("Address of r:%d",r);
return 0;
}