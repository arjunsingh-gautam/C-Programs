/* Q8.Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement. */
#include<stdio.h>
int main()
{
    int num;
    int new;
    printf("Enter a number:");
    scanf("%d",&num);
    switch(1){
        case 1:
            if(num>=0){
                new=-num;
                printf("The negative of %d is %d",num,new);
                break;
            }
        case 2:
            new=-num;
            printf("The positive of %d is %d",num,new);
            break;
    }
}