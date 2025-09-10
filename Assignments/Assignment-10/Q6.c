/* 6.Write a function to print all Prime numbers between two given numbers. */
#include <stdio.h>

// Function prototypes
int isPrime(int num);

int main() {
    int num1,num2,min,max;
    printf("Enter the numbers: ");
    scanf("%d,%d", &num1,&num2);
    if(num1>num2){
        min=num2;
        max=num1;
    }
    else{
        min=num1;
        max=num2;
    }
    int current_prime =min+1 ; 

    // Print the first N prime numbers
    printf("The prime numbers between %d and %d are: ",min,max);
    while(min<current_prime && current_prime<max) {
        if (isPrime(current_prime)==1){
            printf("%d,",current_prime);
        }
        // Find the next prime
        current_prime++;
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

