// Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include <stdio.h>
int main()
{
    int num;
    int mod_num;
    printf("Enter the number:");
    scanf("%d", &num);
    mod_num = ((num / 10) * 10);
    printf("Modified number is %d", mod_num);
    return 0;
}