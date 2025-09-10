/* 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element. */
#include<stdio.h>
void duplicate(int[],int);
int main()
{
    int length;
    printf("Enter the length of array:");
    scanf("%d",&length);

    int arr[length];
    for(int i=0;i<length;i++){
        printf("Enter element-%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal Array:\n");
    for(int i=0;i<length;i++){
        printf("%d,",arr[i]); 
    }

    printf("\n");
    duplicate(arr,length);
    return 0;
}

void duplicate(int a[],int l){
    int i;
    for( i=0;i<l-1;i++){
        if(a[i]==a[i+1]){
            printf("First occurrence of adjacent duplicate values: %d (at index %d and %d)\n", a[i], i, i + 1);
            return; 
        }
        
    }
    if(i==l-1){
        printf("No adjacent duplicate values found");
    }
}