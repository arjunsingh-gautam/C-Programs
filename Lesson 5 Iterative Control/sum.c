/* write a program to calculate sum of first n natural numbers */
#include <stdio.h>
int main()
{
    int num, sum = 0, i = 0, num2;
    printf("Enter how many numbers you want to add:");
    scanf("%d", &num);
    while (i < num)
    {
        printf("Enter the number you want to add:");
        scanf("%d", &num2);
        sum = sum + num2;
        i++;
    }
    printf("The total sum is %d", sum);
    return 0;
}