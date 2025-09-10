/* Q9.Program to Convert even number into its upper nearest odd number
Switch Statement. */
#include<stdio.h>
int main()
{
    int num;
    int new;
    printf("Enter a number:");
    scanf("%d",&num);
    switch(1){
        case 1:
            if(num%2==0){
                new=num+1;
                printf("Upper nearest odd number of %d is %d",num,new);
                break;
            }
            case 2:
                new=num+1;
                printf("Upper nearest even number of %d is %d",num,new);
                break;

    }

}