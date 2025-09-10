// . Write a program to take a three-digit number from the user and rotate its digits by one position towards the right
#include <stdio.h>

int main()
{
    int num, rotatedNum;
    int leftDigit, middleDigit, rightDigit;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Ensure the number is indeed three digits
    if (num < 100 || num > 999)
    {
        printf("The number must be exactly three digits.\n");
        return 1; // Exit with error code
    }

    // Extract digits
    rightDigit = num % 10;         // Gets the last digit
    middleDigit = (num / 10) % 10; // Gets the middle digit
    leftDigit = num / 100;         // Gets the first digit

    // Rotate digits by one position to the right
    rotatedNum = rightDigit * 100 + leftDigit * 10 + middleDigit;

    printf("After rotating right: %d\n", rotatedNum);

    return 0;
}
