//Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
    int month_no;
    printf("Enter the month no. :");
    scanf("%d",&month_no);
    if(month_no==4 || month_no==6 || month_no==9 || month_no==11 ){
        printf("The month has 30 days");
    }
    else if(month_no==2){
        printf("The month has 28 days");
    } 
    else{
        printf("The month has 31 days");
    }
    return 0;
}