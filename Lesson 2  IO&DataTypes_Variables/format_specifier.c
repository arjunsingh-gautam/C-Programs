//C Code with All Format Specifiers
#include <stdio.h>

int main() {
    // Integer types
    int i = -10;
    unsigned int ui = 10;
    short s = -5;
    long l = 123456789;
    long long ll = 9876543210;
    
    // Floating-point types
    float f = 3.14159;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238;

    // Character & String types
    char c = 'A';
    char str[] = "Hello, C!";

    // Pointer
    void *ptr = &i;

    // Printing all data types
    printf("Integer (%%d): %d\n", i);
    printf("Unsigned Integer (%%u): %u\n", ui);
    printf("Short (%%hd): %hd\n", s);
    printf("Long (%%ld): %ld\n", l);
    printf("Long Long (%%lld): %lld\n", ll);
    
    printf("Float (%%f): %f\n", f);
    printf("Double (%%lf): %lf\n", d);
    printf("Long Double (%%Lf): %Lf\n", ld);
    
    printf("Character (%%c): %c\n", c);
    printf("String (%%s): %s\n", str);

    printf("Pointer Address (%%p): %p\n", ptr);

    // Octal and Hexadecimal representations
    printf("Octal (%%o): %o\n", i);
    printf("Hexadecimal (lowercase %%x): %x\n", i);
    printf("Hexadecimal (uppercase %%X): %X\n", i);

    // Scientific notation
    printf("Scientific Notation (%%e): %e\n", d);
    printf("Scientific Notation (%%E): %E\n", d);

    // Exponential and general formats
    printf("General Format (%%g): %g\n", d);
    printf("General Format (%%G): %G\n", d);

    // Printing percentage symbol
    printf("Percentage Sign (%%): %%\n");

    return 0;
}
