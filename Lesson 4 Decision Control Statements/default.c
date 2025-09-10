#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    switch(num){
        case 5>4: // 5>4 ---> 1 we cannot write num>4 --> expression containing variable cannot be evaluated at compile time
            printf("Arjun\n");
            break;// if here break is not used then fall through will occur and below case will also be executed
        case 2:
            printf("Ashish\n");
            break;
        case 3 ... 7: // runs when any number between 3 and 7 is entered including 3 & 7
            printf("Bhoumik\n");
            break;
        default: // run by default when cases not matches
            printf("Galat number enter kiya\n");
        
    }
    printf("\n");
    return 0;
}