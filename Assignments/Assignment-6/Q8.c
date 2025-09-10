//Write a program to check whether a given number is a Prime number or not
#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1; // Assume the number is prime initially

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers, so we handle them separately
    if (num <= 1) {
        isPrime = 0; // Set isPrime to 0 as num is not prime
    }
    else {
        // Check divisibility of num by numbers from 2 to num-1
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Set isPrime to 0 if num is divisible by any number
                break; // No need to check further, as num is not prime
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
