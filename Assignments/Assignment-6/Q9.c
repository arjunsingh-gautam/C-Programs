//Write a program to calculate LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Check multiples of the maximum number until both numbers are divisible by it
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}
