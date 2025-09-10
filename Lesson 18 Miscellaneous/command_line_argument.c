// In this code we will learn how to take command line argument in C while executing a source code
#include <stdio.h>
int main(int argc,char *argv[])
{
    printf("Number arguments passed:%d\n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("Argument-%d is: %s\n",i+1,argv[i]);
    }
    return 0;
}