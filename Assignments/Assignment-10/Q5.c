/* 5. Write a function to print first N prime numbers (TSRN) */
#include <stdio.h>

// Function prototypes
int isPrime(int num);
int next_prime(int last_prime);

int main() {
    int num; // Number of primes to print
    int current_prime = 2; // Start checking from the first prime number

    // Get the number of primes to print
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the first N prime numbers
    printf("The first %d prime numbers are: ", num);
    for (int i = 0; i < num; i++) {
        printf("%d", current_prime);
        if (i < num - 1) {
            printf(", ");
        }
        // Find the next prime
        current_prime = next_prime(current_prime);
    }
    printf("\n");

    return 0;
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to find the next prime number after the given last_prime
int next_prime(int last_prime) {
    int candidate = last_prime + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }
    return candidate;
}
