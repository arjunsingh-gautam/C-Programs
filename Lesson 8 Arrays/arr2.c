//write a program to enter and print a matrix
#include<stdio.h>
void input(int b[][10],int,int);  // Second dimension size must be specified or use a pointer to an array
void output(int c[][10],int,int);
int main()
{
    int n,m;
    printf("Enter the value n and m:");
    scanf("%d%d",&n,&m);
    if (m > 10) {
        printf("m cannot be greater than 10\n");
        return 1;
    }
    int a[n][m];
    input(a,n,m);
    output(a,n,m);
    return 0;
}
void input(int b[][10],int n,int m)
{
    int i,j;
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}
void output(int c[][10],int n,int m)
{
    int i,j;
    printf("Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}