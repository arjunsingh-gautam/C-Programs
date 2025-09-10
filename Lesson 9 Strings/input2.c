//Taking input from user considering whitespaces
#include<stdio.h>
int main()
{
    char str[50];
    printf("Entet the string:");
    scanf("%[^\n]",str);  //%[^\n] format specifier, which reads characters until it encounters a newline (\n).
    printf("Entered string is %s",str);
    return 0;
}