/* 1. Write a function to find the greatest number from the given array of any size. (TSRS) */
#include<stdio.h>
int max_element(int[],int);
int main(){
    int length;
    int max;
    printf("Enter length of array:");
    scanf("%d",&length);
    int arr[length];
    for(int i=0;i<length;i++){
        printf("Enter the element-%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<length;i++){
        printf("%d,",arr[i]);
    }
    max=max_element(arr,length);
    printf("\n");
    printf("The maximum element in array is:%d",max);
    
}
int max_element(int a[],int l){
    int max=a[0];
    for(int i=1;i<l;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}