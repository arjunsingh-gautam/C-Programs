//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter the lengths of three sides of a triangle:\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    if(a + b > c && a + c > b && b + c > a) {
        printf("A triangle is possible with the given side lengths.\n");
    } else {
        printf("A triangle is not possible with the given side lengths.\n");
    }
    
    return 0;
}
