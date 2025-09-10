// Formatting Using Format Specifier:
#include <stdio.h>

int main() {
    int num = 42;
    double pi = 3.141592653589793;
    char str[] = "Hello";
    int *ptr = &num;

    // Integer formatting
    printf("Integer Formatting:\n");
    printf("Default: %d\n", num);
    printf("Width 5: |%5d|\n", num);
    printf("Left-aligned: |%-5d|\n", num);
    printf("Zero-padded: |%05d|\n", num);
    printf("With + sign: %+d\n\n", num);

    // Floating-Point formatting
    printf("Floating-Point Formatting:\n");
    printf("Default: %f\n", pi);
    printf("Precision 2: %.2f\n", pi);
    printf("Precision 5: %.5f\n", pi);
    printf("Width 10, Prec 2: |%10.2f|\n", pi);
    printf("Width 10, Prec 5: |%10.5f|\n\n", pi);

    // String Formatting
    printf("String Formatting:\n");
    printf("Normal: |%s|\n", str);
    printf("Left-aligned (Width 10): |%-10s|\n", str);
    printf("Truncate to 3 chars: |%.3s|\n", str);
    printf("Left-aligned + Truncate: |%-10.3s|\n\n", str);

    // Hexadecimal & Octal Formatting
    printf("Hex & Octal Formatting:\n");
    printf("Decimal : %d\n", num);
    printf("Octal   : %o\n", num);
    printf("Hex (lower) : %x\n", num);
    printf("Hex (upper) : %X\n", num);
    printf("Hex with 0x : %#x\n", num);
    printf("Octal with 0 : %#o\n\n", num);

    // Scientific Notation
    printf("Scientific Notation:\n");
    printf("Scientific (lowercase): %e\n", pi);
    printf("Scientific (uppercase): %E\n\n", pi);

    // Memory Address
    printf("Pointer Address:\n");
    printf("Pointer: %p\n", ptr);

    return 0;
}
