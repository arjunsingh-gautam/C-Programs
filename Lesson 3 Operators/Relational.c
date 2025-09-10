#include <stdio.h>
#include <conio.h>
int main()
{
    printf("< operator:\n");
    printf("3>4 is: %d\n", (3 > 4));
    getch();
    printf("> operator:\n");
    printf("4>3 is: %d\n", (4 > 3));
    getch();
    printf("<= operator:\n");
    printf("4<=5 is: %d\n", (4 <= 5));
    getch();
    printf(">= operator:\n");
    printf("4>=5 is: %d\n", (4 >= 5));
    getch();
    printf("== operator:\n");
    printf("4==5 is: %d\n", (4 == 5));
    getch();
    printf("!= operator:\n");
    printf("4!=5 is: %d\n", (4 != 5));
    getch();
    printf("10>8>6 is: %d\n",(10>8>6));
/*In C, the expression 10 > 8 > 6 does not evaluate the way you might intuitively expect if you're thinking in terms of mathematical chains of inequalities. Instead, it follows C's rules of operator precedence and associativity.

Step-by-Step Evaluation in C
First Comparison (10 > 8):

This evaluates to 1 (true) because 10 is indeed greater than 8.
Second Comparison (1 > 6):

Now the result of the first comparison (1) is compared with 6.
1 > 6 evaluates to 0 (false) because 1 is not greater than 6.
Therefore, the expression 10 > 8 > 6 evaluates to 0 in C.
*/
    return 0;
}