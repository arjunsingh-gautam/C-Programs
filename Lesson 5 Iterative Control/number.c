// Write to print natural numbers
#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter how many numbers you want to print:");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d,", i);
        i++;
    }
    return 0;
}