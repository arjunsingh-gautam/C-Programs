/* 10. Write a recursive function to print reverse of a given number */
#include<stdio.h>

void reverse_num(int x);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Reverse of %d is:",num);
    reverse_num(num);
    printf("\n");
    return 0;
}

void reverse_num(int x) {
    if (x <= 0) {
        return;
    }
    printf("%d", x%10);
    reverse_num(x/10);
    
}
