//Syntax:char* strlwr(char *str);
//Description: Converts all uppercase characters in the string str to lowercase.


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    printf("Original string: %s\n", str);
    
    char* lowerStr = strlwr(str);
    printf("Lowercase string: %s\n", lowerStr);
    
    return 0;
}