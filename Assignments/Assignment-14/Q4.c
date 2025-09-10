/* 4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */
#include<stdio.h>
int* copy(int[],int[],int);
void left_shift(int[],int[],int,int);
void right_shift(int[],int[],int,int);
int main()
{
    int length;
    int *copy_arr;
    int p;
    printf("Enter the lenght of an array:");
    scanf("%d",&length);
    
    int arr[length];
    int c[length];

    for (int i=0;i<length;i++){
        printf("Enter element-%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Original Array:");
    for(int i=0;i<length;i++){
        printf("%d,",arr[i]);
    }
    copy_arr=copy(arr,c,length);
    
    int option;
    printf("\nPress-1 for left shift\nPress-2 for right shift\n");
    scanf("%d",&option);
    switch(option){
        case 1:
            printf("Enter the value positions you want to shift:");
            scanf("%d",&p);
            left_shift(arr,c,length,p);
            break;
        case 2:
            printf("Enter the value positions you want to shift:");
            scanf("%d",&p);
            right_shift(arr,c,length,p);
            break;

    }
}

int *copy(int b[],int c[],int l){
    for(int i=0;i<l;i++){
        c[i]=b[i];
    }
    return c;
}

void left_shift(int a[],int c[],int l,int p){
    int n;
    if(p%l==0){
        n=l;
    }
    else{
        n=p%l;
    }
    for(int i=0;i<l;i++){
        if(i+n<l){
            a[i]=c[i+n];
        }
        if(i+n>=l){
            a[i]=c[i+n-l];
        }
    }
    printf("\n");
    printf("Shifted Array by %d positions:",n);
    for(int i=0;i<l;i++){
        printf("%d,",a[i]);
    }
}

void right_shift(int a[],int c[],int l,int p){
    int n;
    if(p%3==0){
        n=3;
    }
    else{
        n=p%3;
    }
    for(int i=0;i<l;i++){
        if(i-n<0){
            a[i]=c[i-n+l];
        }
        if(i-n>=0){
            a[i]=c[i-n];
        }
    }
    printf("\n");
    printf("Shifted Array by %d positions:",n);
    for(int i=0;i<l;i++){
        printf("%d,",a[i]);
    }
}