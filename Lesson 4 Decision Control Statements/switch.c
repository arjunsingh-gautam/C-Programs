#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("Arjun\n");
        case 2:
            printf("Ashish\n");
            break;
        case 3:
            printf("Bhoumik\n");
    }
    printf("\n");
    return 0;
}