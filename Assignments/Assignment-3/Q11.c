//Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
int main()
{
    int marks,i;
    int pass =1;
    for(i=0;i<=4;i++){
        printf("Enter marks of Subject-%d:",i+1);
        scanf("%d",&marks);

        if(marks<33){
            pass=0;
            break;
        }
    }
        if(pass){
            printf("The candidate has passed the exam.");
        }
        else{
            printf("The candidate has failed the exam.");
        }
    return 0;
}