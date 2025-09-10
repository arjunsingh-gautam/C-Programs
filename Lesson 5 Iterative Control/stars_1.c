/* print n stars in a line */
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter no. stars you want to print in a line:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("* ");
    }
    return 0;
}