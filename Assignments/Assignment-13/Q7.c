/* 7. Write a program to find second largest in an array.Take array values from the user. */
#include<stdio.h>
int main(){
    int arr[10];
    int temp;
    int max_index;
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
            max_index=count; 
            for(int i = count+1;i<10;i++){
                if (arr[i]>arr[max_index]){
                    max_index=i; //max_index is a variable used to track the index of max value so that we can swap it laterm with count value
                }
            }
            if(max_index != count){
                temp=arr[count];
                arr[count]=arr[max_index]; 
                arr[max_index]=temp;

            }
                
            count++;
        }

printf("The second_largest element in array is:%d",arr[1]);
return 0;
}