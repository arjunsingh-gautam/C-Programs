//program to calculate length of a string
#include<stdio.h>
int main()
{
    int count=0;
    char str[10]={'B','H','O','P','A','L'};
    for(int i=0;str[i];i++)
    {
        count+=1;
    }
    printf("Length of string is %d",count);
    return 0;
}