// Write a program to find the position of first 1 in LSB.

#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (num == 0)
    {
        printf("The number is 0 and has no '1' bits.\n");
        return 0; // Early exit if number is 0
    }

    // Initialize position counter; positions start at 1
    int position = 1;

    // Loop until we find a '1'
    while (!(num & 1))
    {
        // Right shift num by 1
        num >>= 1;

        // Increment position counter
        position++;

        // If num becomes 0, it means we've shifted through all bits
        if (num == 0)
        {
            printf("No '1' bits found.\n");
            return 0; // Exit if somehow we didn't find any '1' despite the earlier check
        }
    }

    // If the loop ends, we've found our first '1'
    printf("The position of the first '1' bit in LSB is: %d\n", position);

    return 0;
}