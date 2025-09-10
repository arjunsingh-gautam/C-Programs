#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 34, b = 48;
    printf("& and operator:\n");
    printf("34&48 is: %d\n", (a & b));
    getch();
    printf("| or  operator:\n");
    printf("34|48 is: %d\n", (a | b));
    getch();
    printf("~ not operator:\n");
    printf("~34 is: %d\n", (~a));
    getch();
    printf(">> right shift operator:\n");
    printf("34>>2 is: %d\n", (a >> 2));
    getch();
    printf("<< left shift operator:\n");
    printf("34<<2 is: %d\n", (a << 2));
    getch();

    return 0;
}