/* 7. Write a recursive function to calculate HCF of two numbers */
#include <stdio.h>

int hcf(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0) {
        return a;
    }
    // Recursive call: hcf(b, a % b)
    return hcf(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));
    return 0;
}
