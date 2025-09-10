/* 9. Write a recursive function to print octal of a given decimal number */
#include<stdio.h>

void octal_num(int x);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Octal of %d is:",num);
    octal_num(num);
    printf("\n");
    return 0;
}

void octal_num(int x) {
    if (x <= 0) {
        return;
    }
    octal_num(x/8);
    printf("%d", x%8);
}
