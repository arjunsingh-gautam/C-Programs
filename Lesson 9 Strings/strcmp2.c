/*The strcmp() function compares two strings lexicographically (i.e., based on the alphabetical order of their characters) and returns:

0 if both strings are equal
a negative value if the first string (str1) is lexicographically less than the second string (str2)
a positive value if the first string (str1) is lexicographically greater than the second string (str2)*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Amar";
    char str2[] = "Amit";
    
    int result = strcmp(str1, str2);
    
    printf("Comparison result: %d\n", result);
    
    return 0;
}

