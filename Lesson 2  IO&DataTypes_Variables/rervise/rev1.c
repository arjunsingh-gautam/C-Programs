// Data-Types:
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int var1=10;
    float var2=10.843;
    double var3=10.843;
    char var4='S';
    bool var5=true;
    printf("Size of int:%lu\n",sizeof(var1));
    printf("Size of float:%lu\n",sizeof(var2));
    printf("Size of double:%lu\n",sizeof(var3));
    printf("Size of char:%lu\n",sizeof(var4));
    printf("Size of bool:%lu\n",sizeof(var5));
    printf("Size of void:%lu\n",sizeof(void));
    return 0;

}