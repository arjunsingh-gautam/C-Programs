/* In this eg. we will learn about if-else if-else statement */

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(100>marks && marks>=90){
        printf("Your Grade is A");
    }

    else if(90>marks && marks>=80){
        printf("Your Grade is B");
    }
    else if(80>marks && marks>=70){
        printf("Your Grade is C");
    }

    else{
        printf("Your Grade is D");          
    }
    return 90;
}