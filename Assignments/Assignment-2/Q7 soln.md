```c
#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (num == 0) {
        printf("The number is 0 and has no '1' bits.\n");
        return 0; // Early exit if number is 0
    }

    // Initialize position counter; positions start at 1
    int position = 1;

    // Loop until we find a '1'
    while (!(num & 1)) {
        // Right shift num by 1
        num >>= 1;

        // Increment position counter
        position++;

        // If num becomes 0, it means we've shifted through all bits
        if (num == 0) {
            printf("No '1' bits found.\n");
            return 0; // Exit if somehow we didn't find any '1' despite the earlier check
        }
    }

    // If the loop ends, we've found our first '1'
    printf("The position of the first '1' bit in LSB is: %d\n", position);

    return 0;
}
```

> > The condition (!(num & 1)) is used in C programming to check if the least significant bit (LSB) of the number num is 0. Let's break down this condition to understand how it works:

- num & 1: This is a bitwise AND operation between the number num and the number 1. The binary representation of 1 is ...00001, which has a 1 only in the least significant bit. When num is bitwise ANDed with 1, the result is the value of the least significant bit of num. This is because all bits other than the LSB are ANDed with 0 (resulting in 0), and the LSB is ANDed with 1, which means the result will be whatever the LSB is (either 0 or 1).

- !(num & 1): The ! operator is a logical NOT operation. It inverts the result of the expression it precedes. In this case, it inverts the result of num & 1. Since num & 1 can only be 0 or 1 (because we're only looking at a single bit), the NOT operation converts:

  - 0 to 1
  - 1 to 0

- Therefore, the condition (!(num & 1)) evaluates to true (which, in C, is any non-zero value, typically 1) if the LSB of num is 0. Conversely, it evaluates to false (0) if the LSB of num is 1.
