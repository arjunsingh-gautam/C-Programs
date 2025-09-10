//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char character;
    char ascii_code;
    printf("Enter the character:");
    scanf("%c",&character);
    ascii_code = (int)character;

    if(ascii_code>64 && ascii_code<91){
        printf(" '%c' is a uppercase alphabet",character);
    }
    else if(ascii_code>96 && ascii_code<123){
        printf(" '%c' is a lowercase alphabet",character);
    }
    else if(ascii_code>47 && ascii_code<57){
        printf(" '%c' is a digit",character);
    }
    else{
        printf(" '%c' is a special character",character);
    }
    return 0;

}