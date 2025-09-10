/* write a program to add numbers entered by user.User can entered any number of numbers until he enters 0 */

#include <stdio.h>

int main()
{
    double num, sum = 0;

    // Prompt the user to enter numbers until they enter 0
    for (;;) // infinite loop similar to while(1)
    {
        printf("Enter a number (enter 0 to finish): ");
        scanf("%lf", &num);

        // Check if the entered number is 0, if so, break out of the loop
        if (num == 0)
        {
            break;
        }

        // Add the entered number to the sum
        sum += num;
    }

    // Display the total sum
    printf("The sum of the numbers entered is: %.2lf\n", sum);

    return 0;
}
