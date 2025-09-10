#include <stdio.h>
#include <stdarg.h> // library to acces macros va_list,va_start,va_end and va_arg

// Variadic function to calculate the sum of integers
int sum(int count, ...) { // ... --> 'ellipses' use for variable arg
    int total = 0;
    va_list args;   // Declare a variable of type va_list
    va_start(args, count); // Initialize the va_list variable with the number of arguments

    // Loop through all the arguments
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // Access the next argument
    }

    va_end(args); // Clean up the va_list variable
    return total;
}

int main() {
    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));        // Output: 6
    printf("Sum of 4, 5: %d\n", sum(2, 4, 5));              // Output: 9
    printf("Sum of 7, 8, 9, 10: %d\n", sum(4, 7, 8, 9, 10)); // Output: 34

    return 0;
}
