//Write a program to calculate average of n no.
#include<stdio.h>
int main()
{
    int n;
    printf("For how many numbers you want to calculate average:");
    scanf("%d",&n);
    float arr[n];
    float sum=0;
    int i;
    printf("Enter %d numbers:",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("Average of 100 numbers is %f",(sum/n));
    return 0;
}