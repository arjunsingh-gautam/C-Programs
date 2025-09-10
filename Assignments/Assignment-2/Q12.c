// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>
int main()
{
    float inr;
    float usd;
    printf("Emter the value for INR:");
    scanf("%f", &inr);
    usd = inr / 76.23;
    printf("The value in USD is: %f", usd);
    return 0;
}