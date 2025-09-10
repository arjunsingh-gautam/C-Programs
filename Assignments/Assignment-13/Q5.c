/* 5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    int min;
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    min=arr[0];
    for(int i=1;i<10;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimum element in array is %d",min);
}