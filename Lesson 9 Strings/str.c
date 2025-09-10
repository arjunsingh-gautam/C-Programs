#include<stdio.h>
int main()
{
    char str[10]={'B','H','O','P','A','L'};
   
   //method-1
    /*for(int i=0;str[i];i++)
        printf("%c",str[i]);
    return 0;
    */
    //

    //method-2
    printf("%s",str);//The name of an array or string variable in C acts as a pointer to the first element of the array or string

}