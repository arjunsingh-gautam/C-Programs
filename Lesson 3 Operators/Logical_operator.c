#include <stdio.h>
#include <conio.h>
int main()
{
    printf("! NOT operator:\n");
    printf("!5>-2 is: %d\n", (!(5>-2)));
    getch();
    printf("&& AND operator:\n");
    printf("5<0&&7/0 is: %d\n", (5 < 0 && 7/0)); // No error due to short circuiting effect
    getch();
    printf("|| OR operator:\n");
    printf("5>0||7/5 is: %d\n", (5 > 0 || 7 /5));
    getch();
    printf("5&&6 is: %d\n",(5&&6));  // not evaluat like in python logical operation on non boolean values give a non boolean value 
    return 0;
}