#include <stdio.h>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
void display_menu(int acc[3]);
int main()
{
    // Dummy database:
    int acc_1[3] = {2435, 10283, 5000}; // {pin_no,account_no,bal_amount}
    int acc_2[3] = {1024, 10293, 4000};
    int acc_3[3] = {2102, 10229, 3040};
    int acc_4[3] = {5013, 10822, 9302};
    int acc_5[3] = {4902, 10932, 9203};
    int *database[5] = {acc_1, acc_2, acc_3, acc_4, acc_5}; // Array of Pointers

    // pin Input and Validation:
    int pin;
    printf("Please! Enter your 4-digit pin:");
    scanf("%d", &pin);
    // pin must be 4 digit:
    /* printf("%d",*(database[1])); */
    if (pin > 999 && pin < 10000)
    {
        // Validation logic
        int i;
        for (i = 0; i < 5; i++)
        {
            if (*(database[i]) == pin)
            {
                printf("Entered pin:%d is a valid pin");
                int acc_processed[3] = {*(database[i]), *(database[i] + 1), *(database[i] + 2)};
                display_menu(acc_processed);
                break;
            }
        }
        if (i == 5)
        {
            printf("Entered pin:%d is an invalid pin", pin);
        }
    }
    else
    {
        printf("Pls enter a 4 digit pin");
    }
}

void display_menu(int acc[3])
{
    int option;
    int deposit_amount;
    int withdraw_amount;
    printf("\nWelcome Account No:%d\n", acc[1]);
    printf(RED "Press-1 to Check Balance\n" RESET);
    printf(GREEN "Press-2 to Deposit Amount\n" RESET);
    printf(YELLOW "Press-3 to Withdraw Amount\n" RESET);
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Your account balance is:%d\n", acc[2]);
        break;
    case 2:
        printf("Enter deposit amount:");
        scanf("%d", &deposit_amount);
        acc[2] = acc[2] + deposit_amount;
        printf(MAGENTA "Amount Credited:%d   Available Balance:%d\n" RESET, deposit_amount, acc[2]);
        break;
    case 3:
        printf("Enter withdraw amount:");
        scanf("%d", &withdraw_amount);
        if (withdraw_amount > acc[2])
        {
            printf("Insufficient Balance:%d", acc[2]);
        }
        else
        {
            acc[2] = acc[2] - withdraw_amount;
            printf(MAGENTA "Amount Debited:%d  Available Balance:%d\n" RESET, withdraw_amount, acc[2]);
        }
        break;
    default:
        printf("Enter a valid option from menu");
    }
}