// program which takes intialises and prints a 2-D string
#include<stdio.h>
int main()
{
    int i,j;
    char s[5][20];
    printf("Enter 5 city names:");
    for(i=0;i<5;i++)
    {
        fgets(s[i],20,stdin); //s[i]-->s[i][20]
    }
    for(j=0;j<5;j++)
    {
        printf("%s\n",s[j]);
    }
    return 0;
}