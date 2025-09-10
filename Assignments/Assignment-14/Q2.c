/* 2. Write a function to find the smallest number from the given array of any size. (TSRS) */
#include<stdio.h>
int min_element(int[],int);
int main(){
    int length;
    int min;
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
    min=min_element(arr,length);
    printf("\n");
    printf("The minimum element in array is:%d",min);
    
}
int min_element(int a[],int l){
    int min=a[0];
    for(int i=1;i<l;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}