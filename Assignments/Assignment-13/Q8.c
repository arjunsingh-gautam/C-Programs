/* 8. Write a program to find the second smallest number in an array.Take array values
from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    int temp;
    int min_index;
    int count=0;
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("The Unsorted Array is:\n");
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    while(count<2){
            min_index=count; 
            for(int i = count+1;i<10;i++){
                if (arr[i]<arr[min_index]){
                    min_index=i; //min_index is a variable used to track the index of min value so that we can swap it laterm with count value
                }
            }
            if(min_index != count){
                temp=arr[count];
                arr[count]=arr[min_index]; 
                arr[min_index]=temp;

            }
                
            count++;
        }

printf("The second smallest element in array is:%d",arr[1]);
return 0;
}