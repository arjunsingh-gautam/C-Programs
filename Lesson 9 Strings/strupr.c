//Syntax:char* strupr(char *str);
//Description: Converts all lowercase characters in the string str to uppercase.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    printf("Original string: %s\n", str);
    
    char* upperStr = strupr(str);
    printf("Uppercase string: %s\n", upperStr);
    
    return 0;
}