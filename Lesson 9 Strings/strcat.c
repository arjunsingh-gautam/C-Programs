//Syntax:char* strcat(char *dest, const char *src);
//Description: Appends the string src to dest and returns a pointer to dest.
#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    char src[] = " World";
    strcat(dest, src);
    printf("Concatenated string is '%s'\n", dest);
    return 0;
}