/* Write a program to find the greatest number stored in an array of size 10. Take array
values from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    int max;
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    max=arr[0];
    for(int i=1;i<10;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum element in array is %d",max);
}