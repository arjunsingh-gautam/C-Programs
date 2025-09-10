/* 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    printf("Sum of elements of arrays is %d",sum);
    return 0;
}