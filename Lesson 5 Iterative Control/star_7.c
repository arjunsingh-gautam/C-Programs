//Print patter like  " ABC
//                      AB
//                       A"

#include <stdio.h>
int main()
{
    int i, j,lines;
    char ch;
    printf("No. of lines you want to print:");
    scanf("%d", &lines);
    for (i = 1; i <= lines; i++)
    {
        ch=65;

        for (j = 1; j <= lines; j++)
        {
            if(i<=j && j<=lines){
                printf("%c ",(ch));
                ch++;
            } 
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}