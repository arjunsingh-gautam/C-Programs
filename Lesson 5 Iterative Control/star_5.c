//Print patter like  " 123
//                      23
//                       3"

#include <stdio.h>
int main()
{
    int i, j,lines;
    printf("No. of lines you want to print:");
    scanf("%d", &lines);
    for (i = 1; i <= lines; i++)
    {
        for (j = 1; j <= lines; j++)
        {
            if(i<=j && j<=lines){
                printf("%d ",(j));
            } 
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}