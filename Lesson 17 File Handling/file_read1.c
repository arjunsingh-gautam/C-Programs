// In this program we will read a file and display it's content
#include<stdio.h>
#include<string.h>
int main()
{
    char output[100];
    output[0]='\0';
    char ch;
    FILE *fp;
    fp=fopen("f1.txt","r");// FILE is open in reading mode:r 
    // For this file must exist
    if(fp==NULL) // if file does not exist NULL will be returned
    {
        printf("File does not exist");
    }
    while(!feof(fp)) // feof(file_pointer): Return 1 when end of file is reached 
    // Return 0 when EOF not reached
    {
        char temp[2];
        ch=fgetc(fp);// fgetc(file_pointer) : read content from file character by character
        temp[0]=ch;
        temp[1]='\0';
        strcat(output,temp);
    }
    fclose(fp); // close file and destroy buffere and variable from RAM
    printf("Content of file:%s",output);
}