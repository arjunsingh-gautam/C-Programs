/* Write a function in C to read n number of values in an array and display it in reverse
order. */
#include<stdio.h>
void rev(int[],int);
int main()
{
    int length;
    int n;
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

    printf("\nNumber values to be reversed from array:");
    scanf("%d",&n);

    rev(arr,n);
    return 0;
}

void rev(int a[],int n){
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    printf("\nReversed Array upto %d values of Original Array is:\n",n);
     for(int i=0;i<n;i++){
        printf("%d,",b[i]); 
    }

}