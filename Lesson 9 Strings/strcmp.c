//Syntax:int strcmp(const char *str1, const char *str2);
//Description: Compares the strings str1 and str2. Returns 0 if both strings are equal, a negative value if str1 is less than str2, and a positive value if str1 is greater than str2.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}