/* write a program to print odd numbers */
#include <stdio.h>
int main()
{
    int num, i = 0;
    printf("Enter number of odd numbers you want to print:");
    scanf("%d", &num);
    while (i < num)
    {
        printf("%d\n", (2 * i + 1));
        i++;
    }
    return 0;
}