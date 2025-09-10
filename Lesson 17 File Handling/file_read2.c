// Reading a file using fgets()
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
    //while(!feof(fp)) // feof(file_pointer): Return 1 when end of file is reached 
    // Return 0 when EOF not reached 
    // cause the last line to be read twice or garbage to be appended, because feof only returns true after an attempt to read past the end of the file.
    char temp[8]="";
    while(fgets(temp,8,fp)!=NULL)
    {
        strcat(output,temp);
    }
    fclose(fp); // close file and destroy buffere and variable from RAM
    printf("Content of file:%s",output);
}