/* 8. Write a function to print PASCAL Triangle. (TSRN) */
#include<stdio.h>
int factorial(int);
int selection(int,int);
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",selection(i,j));
        }
        printf("\n");
    }
}
int factorial(int x) 
{
    int i=1;
    int f=1;
    while(i<=x){
        f=f*i;
        i++;
    }
    return f;
}
int selection(int x,int y)
{
    return ((factorial(x))/(factorial(y)*factorial(x-y)));

}