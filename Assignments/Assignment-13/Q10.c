/* Write a program in C to copy the elements of one array into another array.Take array
values from the user. */
#include<stdio.h>
int main()
{
    int arr[10];
    int copy[10];
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Original Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    for(int i=0;i<10;i++){
        copy[i]=arr[i];
    }
    printf("\n");
    printf("The Copy of Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",copy[i]);
    }
    return 0;

}