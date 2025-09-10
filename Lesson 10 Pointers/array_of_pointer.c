//Array of pointers
#include <stdio.h>

void printArrays(int *arr[], int sizes[], int numArrays);

int main() {
    // Define arrays of different sizes
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6, 7, 8};
    int array3[] = {9, 10};

    // Array of pointers to store the addresses of the arrays
    int *arrays[] = {array1, array2, array3};

    // Array to store the sizes of the arrays
    int sizes[] = {3, 5, 2};

    // Number of arrays
    int numArrays = sizeof(arrays) / sizeof(arrays[0]);

    // Pass the array of pointers and sizes to the function
    printArrays(arrays, sizes, numArrays);

    return 0;
}

// Function to print the elements of different arrays
void printArrays(int *arr[], int sizes[], int numArrays) {
    for (int i = 0; i < numArrays; i++) {
        printf("Array %d: ", i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
