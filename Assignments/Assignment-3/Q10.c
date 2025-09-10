// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, profitOrLossPercentage;

    // Input cost price and selling price from the user
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    profitOrLoss = sellingPrice - costPrice;

    // Calculate profit or loss percentage
    profitOrLossPercentage = (profitOrLoss / costPrice) * 100;

    // Print the result
    if (profitOrLoss > 0) {
        printf("Profit percentage: %.2f%%\n", profitOrLossPercentage);
    } 
    else if (profitOrLoss < 0) {
        printf("Loss percentage: %.2f%%\n", -profitOrLossPercentage); // Display positive value for loss percentage
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
