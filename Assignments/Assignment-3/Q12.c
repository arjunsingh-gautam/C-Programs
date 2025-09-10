// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char alphabet;
    char ascii_code;
    printf("Enter the alphabet:");
    scanf("%c",&alphabet);
    ascii_code = (int)alphabet;

    if(ascii_code>64 && ascii_code<91){
        printf(" '%c' is a uppercase alphabet",alphabet);
    }
    else{
        printf(" '%c' is a lowercase alphabet",alphabet);
    }
    return 0;

}