/* 3. Write a function to sort an array of any size. (TSRS) */
#include<stdio.h>
int* sort(int[],int);
int main(){
    int length;
    int min;
    printf("Enter length of array:");
    scanf("%d",&length);

    int arr[length];
    int *sorted_arr;

    for(int i=0;i<length;i++){
        printf("Enter the element-%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<length;i++){
        printf("%d,",arr[i]);
    }
    
    sorted_arr=sort(arr,length);
    printf("\n");
    printf("Sorted array:\n");
    for(int i=0;i<length;i++){
        printf("%d,",sorted_arr[i]);
    }

}

int* sort(int a[],int l){
    int temp;
    int min_index;
    int count=0;
    while(count<l-1){
            min_index=count; 
            for(int i = count+1;i<l;i++){
                if (a[i]<a[min_index]){
                    min_index=i; //min_index is a variable used to track the index of min value so that we can swap it laterm with count value
                }
            }
            if(min_index != count){
                temp=a[count];
                a[count]=a[min_index]; 
                a[min_index]=temp;

            }
                
            count++;
        }

        return a;
}