/* write a program to print star in rectangle pattern */
#include <stdio.h>
int main()
{
    int i, j, n1, n2;
    printf("Length of rectangle:");
    scanf("%d", &n2);
    printf("Breadth of rectangle:");
    scanf("%d", &n1);
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}