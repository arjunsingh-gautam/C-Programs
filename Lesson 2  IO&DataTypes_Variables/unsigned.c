// In this we learn about unsigned numbers and how C handles them
#include <stdio.h>

int main() {
    int num = -10;
    printf("Using %%d: %d\n", num);  // Prints -10
    printf("Using %%u: %u\n", num);  // Misinterpreted as a large unsigned int
    return 0;
}


/* When we store -10 in a signed integer, it is represented in two’s complement form in memory.

Step-by-Step Breakdown
    - Binary Representation of 10 (Positive) in 32-bit:
        00000000 00000000 00000000 00001010  (10 in binary)
    - Two’s Complement of -10 (Flip bits and add 1):
        11111111 11111111 11111111 11110110  (-10 in binary)
    - Interpreted as an Unsigned Integer
        Since %u does not recognize negatives, it treats the bits as a large positive number.
        The binary 11111111 11111111 11111111 11110110 corresponds to 4294967286 (on a 32-bit system). 
*/
