/* Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    float sum=0;
    int length;
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
    length = sizeof(arr) / sizeof(arr[0]);
    printf("The average of elements of arrays is %.2f",sum/length);
    return 0;
}