//Q3.Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include <stdio.h>

int main() {
    int dayNumber;
    printf("Enter the day number (1-7): ");
    scanf("%d", &dayNumber);
    switch(dayNumber) {
        case 1:
            printf("Monday: Have a great start to the week!\n");
            break;
        case 2:
            printf("Tuesday: Keep going strong!\n");
            break;
        case 3:
            printf("Wednesday: Halfway there!\n");
            break;
        case 4:
            printf("Thursday: Almost the weekend!\n");
            break;
        case 5:
            printf("Friday: Enjoy your weekend preparations!\n");
            break;
        case 6:
            printf("Saturday: Have a relaxing weekend!\n");
            break;
        case 7:
            printf("Sunday: Happy Sunday!\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
