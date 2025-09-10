// In this program we will read data from file using fscanf()
#include<stdio.h>
int main()
{
    FILE *fp=fopen("f2.txt","r");
    char input[100];
    fscanf(fp,"%[^\n]",input);
    printf("Content file is: %s",input);

}