/* Write a program which asks user to enter an even number, computer will give user at most 3 chances,if user failed to answer in any of the chances,"Game over" message should be displayedon on the screen,otherwise "You win" message should be displayed and game stops immediately */

#include <stdio.h>

int main()
{
    int num, i = 0; // Start i from 0 for simplicity
    while (i < 3)
    {
        printf("Enter an even number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("You Win!\n");
            break; // Exit the loop immediately if the user wins
        }
        else
        {
            printf("Pls enter an even number\n");
        }
        i++;
    }
    if (i == 3)
    { // Correctly checks if the loop completed all iterations
        printf("You Lose!\n");
    }
    printf("Game Over!\n");
    return 0;
}
