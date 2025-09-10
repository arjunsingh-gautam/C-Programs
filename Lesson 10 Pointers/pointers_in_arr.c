#include<stdio.h>
void input(int*,int);
void display(int*,int);
int main()
{
    int a[10];
    input(a,10);
    display(a,10);
    printf("\n");
    return 0;
}
void input(int *p,int n)
{
    int i;
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
}
void display(int *p,int n){
    int i;
    printf("Array is:");
    for(i=0;i<n;i++){
        printf("%d,",*(p+i));
    }
}