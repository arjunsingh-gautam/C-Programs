//Q1.Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number:");
    scanf("%d",&month);
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month %d has 31 days\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month %d has 30 days\n", month);
            break;
        case 2:
            printf("Month 2 has 28 days if the year is not a leap year, and 29 days if it is a leap year\n");
            break;
        default:
            printf("Invalid month number entered\n");
            break;
    }
    return 0;
}