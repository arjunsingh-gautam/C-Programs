/* 3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user. */
#include<stdio.h>
void sum_even(int b[]);
void sum_odd(int c[]);
int main()
{
    int arr[10];
    float sum=0;
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    sum_even(arr);
    sum_odd(arr);
    return 0;
}
void sum_even(int b[]) {
    int even[10];
    int sum = 0;
    int even_index = 0;  // Track the index for even elements

    // Collect even elements
    for(int i = 0; i < 10; i++) {
        if (b[i] % 2 == 0) {
            even[even_index++] = b[i];
        }
    }

    // Display the even elements
    printf("\nArray of even elements:\n");
    for(int i = 0; i < even_index; i++) {
        printf("%d, ", even[i]);
    }
    printf("\n");

    // Calculate and display the sum of even elements
    for(int i = 0; i < even_index; i++) {
        sum += even[i];
    }
    printf("Sum of even elements of array is %d\n", sum);
}

// Function to calculate and display sum of odd numbers and odd elements
void sum_odd(int c[]) {
    int odd[10];
    int sum = 0;
    int odd_index = 0;  // Track the index for odd elements

    // Collect odd elements
    for(int i = 0; i < 10; i++) {
        if (c[i] % 2 != 0) {
            odd[odd_index++] = c[i];
        }
    }

    // Display the odd elements
    printf("Array of odd elements:\n");
    for(int i = 0; i < odd_index; i++) {
        printf("%d, ", odd[i]);
    }
    printf("\n");

    // Calculate and display the sum of odd elements
    for(int i = 0; i < odd_index; i++) {
        sum += odd[i];
    }
    printf("Sum of odd elements of array is %d\n", sum);
}