//Description: Returns the length of the string str, excluding the terminating null byte (\0).
//Syntax: size_t strlen(const char *str);
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    int length = strlen(str);
    printf("Length of '%s' is %d\n", str, length);
    return 0;
}
