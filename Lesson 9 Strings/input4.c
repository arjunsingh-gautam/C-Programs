//Taking input from user using fgets()
#include<stdio.h>
int main()
{
    char str[50];
    printf("Entet the string:");
    fgets(str,sizeof(str),stdin); 
    printf("Entered string is %s",str);
    return 0;
}