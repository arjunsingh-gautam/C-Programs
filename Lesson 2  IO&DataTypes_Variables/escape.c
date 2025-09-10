// code to demonstrate escape sequences
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("a\n");
    ch = getch();

    printf("a\t");
    ch = getch();

    printf("a\b");
    ch = getch();

    printf("b\r");
    ch = getch();

    printf("c\\");
    ch = getch();

    printf("a\"");
    ch = getch();

    printf("a\'");
    ch = getch();

    printf("%c", ch);
    return 0;
}