#include<stdio.h>
int main()
// {
//     // string is a character array end with /0 null character
//     char str[30]="hello";// string declaration
//     printf("the string is %s",str);
//     return 0;

// }
// taking input using scanf accepting white space
// {
//     char str[50];
//     printf("enter a string:");
//     scanf("%[^\n]",str);
//     printf("%s",str);
//     return 0;

// }

// gets() not recommended can led to overflow
// {
//     char str[50];
//     printf("Enter a string");
//     gets(str);
//     printf("%s",str);
//     return 0;
// }

// fgets(str_name,size,stdin) prevents buffer
{
    char s[40];
    printf("Enter a string:");
    fgets(s,40,stdin);
    printf("%s",s);
    return 0;
}