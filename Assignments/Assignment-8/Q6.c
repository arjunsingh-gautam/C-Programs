/* Q6. Program to check whether a year is a leap year or not. Using switch
statement */
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    switch (1) {
        case 1:
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
                break;
            }
        case 2:
            if (year % 100 == 0) {
                printf("%d is not a leap year.\n", year);
                break;
            }
        case 3:
            if (year % 4 == 0) {
                printf("%d is a leap year.\n", year);
                break;
            }
        default:
            printf("%d is not a leap year.\n", year);
            break;
    }

    return 0;
}
