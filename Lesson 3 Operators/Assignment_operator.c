#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 5, y;
    y = x; // y=5
    printf("value in y is: %d\n", y);
    printf("x+=3 is: %d\n", x += 3); // x=8
    printf("x-=3 is: %d\n", x -= 3); // x=5
    printf("x*=3 is: %d\n", x *= 3); // x=15
    printf("x/=3 is: %d\n", x /= 3); // x=5
    printf("x%=3 is: %d\n", x %= 3); // x=2

    return 0;
}