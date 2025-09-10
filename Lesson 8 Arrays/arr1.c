//Write a program to enter 10 numbers from user then check for odd and even and calculate sum of odd and even numbers
#include<stdio.h>
int main()
{
    int i,a[10],sum_even=0,sum_odd=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered Array:\n");
    for(i=0;i<10;i++){
        printf("arr-%d:%d ,",i,a[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            sum_even+=a[i];
        }
        else{
            sum_odd+=a[i];
        }
    }
    printf("Sum of even numbers is %d\n",sum_even);
    printf("Sum of odd numbers is %d",sum_odd);
    return 0;

}