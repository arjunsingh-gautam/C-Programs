//Write a program to reverse a given number
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10; // Get the last digit of num
        reversedNum = reversedNum * 10 + remainder; // Add the last digit to reversedNum
        num /= 10; // Remove the last digit from num
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
