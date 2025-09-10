#include <stdio.h>
#include <conio.h>
int main() //  main function is the entry level for every C program
{
    float a = 3.14; // C is statically type therefore variable along are declared and sometimes intialised earlier before using them
    char ch;
    char m = 65;
    printf("%.1f\n", a);
    ch = getch(); // getch() is used to take a single character input which can be store in a char variable
    printf("%.2f\n", a);
    ch = getch();
    printf("%c\n", m);
    printf("%c", ch);
    return 0; // indicates the successful execution of the program to the operating system.
}