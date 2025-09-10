/* 8. Write a recursive function to print binary of a given decimal number */
#include<stdio.h>

void binary_num(int x);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Binary of %d is:",num);
    binary_num(num);
    printf("\n");
    return 0;
}

void binary_num(int x) {
    if (x <= 0) {
        return;
    }
    binary_num(x/2);
    printf("%d", x%2);
}
