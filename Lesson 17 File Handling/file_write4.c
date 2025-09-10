// In this program we will write in file using fprintf()
#include<stdio.h>
int main()
{
    FILE *fp=fopen("f2.txt","w");
    char name[100];
    printf("Enter your name:");
    fflush(stdin);
    fgets(name,sizeof(name),stdin);
    fflush(stdin);
    // Writing in file using fprintf()
    fprintf(fp,"Hello %s",name);
}