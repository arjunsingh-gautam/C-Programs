/*WAP to calculate the length of String using printf function.*/
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    printf("Enter the string whose Length you want to calculate:");
    scanf("%[^\n]", str);

    // Use printf to calculate the length. The %n specifier stores the number of characters
    // printed so far into the variable provided as an argument (length in this case).
    // Since we're not actually printing anything before %n, it stores the length of the string.
    printf("%s%n", str, &length);

    // Note: The actual string is printed to demonstrate the usage.
    // The calculation of length does not require the string to be printed.

    // Print the length of the string
    printf("\nThe length of the string is: %d\n", length);

    return 0;
}
