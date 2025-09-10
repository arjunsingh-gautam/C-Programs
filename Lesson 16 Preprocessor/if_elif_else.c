#include <stdio.h>

#define VALUE 20

int main() {
#if VALUE < 10
    printf("Value is less than 10\n");
#elif VALUE < 30
    printf("Value is less than 30\n"); // Only compiles this line 
#else
    printf("Value is 30 or more\n");
#endif
    return 0;
}