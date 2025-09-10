// Q4.Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

#include<stdio.h>
int main()
{
    
    char option;
    do{
        int a,b,c;
        printf("\n");
        printf("Menu:\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\nb. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\nc. Check whether a given set of three numbers are equilateral triangleor not\nd. Exit\n");
        printf("Enter your option:\n");
        scanf(" %c",&option);
        switch (option){
            case 'a':
                
                printf("Enter the lengths:\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c || a==c){
                    printf("These are lengths of an isosceles triangle\n");
                }
                break;
            case 'b':
                
                printf("Enter the lengths:\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a*a+b*b==c*c || a*a+c*c==b*b || b*b +c*c ==a*a){
                    printf("Theses are lengths of a right angle triangle\n");
                }
                break;
            case 'c':
                
                printf("Enter the lengths:\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b && b==c && a==c){
                    printf("These are lengths of an equliateral triangle\n");
                }
                break;
            case 'd':
                printf("Exiting the program\n");
                break;
            default:
                printf("Enter correct option\n");
                break;

        }
    }while(option!='d');
    return 0;
}