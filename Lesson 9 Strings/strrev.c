//Syntax:char* strrev(char *str);
//Description: Reverses the string str in-place.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    printf("Original string: %s\n", str);
    
    char* reversedStr = strrev(str);
    printf("Reversed string: %s\n", reversedStr);
    
    return 0;
}