#include<stdio.h>
#define ACTION(a,b) a##b+a*b // ##:Concatenation --> a##b ab
int main()
{
    printf("Value of Macro:%d",ACTION(3,4));// 3##4 +3*4 --> 34 + 3*4 = 34+12=46
}