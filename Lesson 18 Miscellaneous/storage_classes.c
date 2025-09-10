// In this program we will learn about storage classes in C:auto,static,extern,register
#include<stdio.h>
void f1();
extern int x; // tells compiler that there is external variable named in x in program
int main()
{
    printf("Global variable x=%d\n",x);
    int x=5;// auto storage class variable
    printf("x=%d\n",x);
    {
        register int z=9; // register storage class variable // location: CPU register
        int x = 2; // auto storage class variable
        printf("x=%d\n",x);
        printf("z=%d\n",z);
    }
    f1();
    f1();
}
void f1()
{
    int x=6;
    static int y=7; // static Storage class // scope: within function // life until: main() program  ends
    y++;
    printf("Local static variable of f1() y=%d\n",y);
    printf("Local variable of f1() x=%d\n",x); //auto Storage class variable //scope: within function //life: till function execution
}

int x=20;// Global variable