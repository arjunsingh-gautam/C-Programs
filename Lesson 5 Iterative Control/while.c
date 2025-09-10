// Program to print Mysirg accordin to user input
#include <stdio.h>
int main()
{
    int i = 1;
    int num;
    printf("Enter no. of times you want to print MysirG:");
    scanf("%d", &num);
    while (i < num)
    {
        printf("MysirG\n");
        i++;
    }
    return 0;
}
