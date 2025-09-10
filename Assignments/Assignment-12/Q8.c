/* 8. Write a recursive function to print first N terms of Fibonacci series */
#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print the first N terms of the Fibonacci series
void printFibonacci(int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int N;
    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("First %d terms of Fibonacci series: ", N);
    printFibonacci(N);

    return 0;
}
