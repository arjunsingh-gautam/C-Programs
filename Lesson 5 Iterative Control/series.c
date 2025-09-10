#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 6)
    {
        if (i % 2)
            i = i - 3;
        else
            i = i + 5;
        printf("%d", i);
    }
    printf("%d", i);
}
/* output: step-1 i=0 i.e even therefor i%2=0 false --> i=5
step-2 i=5 i.e odd i%2=1 therefor i=5-3-->i=2
step-3 i=2 i.e even i%2=0 there i=2+5-->i=7
step-4 i>6 there loop terminal print-->7
final output:5277 */