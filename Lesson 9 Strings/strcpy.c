//Syntax:char* strcpy(char *dest, const char *src);
//Description: Copies the string src to dest including the terminating null byte (\0).

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    strcpy(dest, src);
    printf("Copied string is '%s'\n", dest);
    return 0;
}