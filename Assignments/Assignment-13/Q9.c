/* Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    int temp;
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        temp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }
    printf("Reversed Array:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
}