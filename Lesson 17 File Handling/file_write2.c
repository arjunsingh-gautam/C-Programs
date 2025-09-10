// Writing in a file using fputs()
#include<stdio.h>
int main()
{
    char input[100];
    FILE *fp=fopen("f1.txt","a");
    printf("Enter content for the file to be append:");
    fgets(input,sizeof(input),stdin);
    printf("\nAppending content in file...");
    fputs(input,fp); //fputs(str,file_pointer): Write string to the file
    fclose(fp);


}