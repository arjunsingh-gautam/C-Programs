// In this Program we will create a .txt file using fopen() and write in it using fputc()
#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    printf("Enter data to write in file:");
    fgets(input,sizeof(input),stdin);
    FILE *fp=fopen("f1.txt","w"); 
    if(fp==NULL){
        printf("File not created\n");
        return 1;
    }
    for(int i=0;i<strlen(input);i++)
    {
        fputc(input[i],fp);
    }
    fclose(fp);
    return 0;
}

/*
fopen("f1.txt","w"): fopen("file_name","opening_mode")
- Create a Buffer(File image) in RAM
- Also creates a FILE type variable which stores information related to file:
    - File Address
    - Help us to read and write from the File Buffer
    - Help us access file through Buffer
    - return Address to FILE variable
    - return NULL if FILE not created
- Create the file if not present in current working directory
- To access the file we create a FILE type pointer to store the Address of FILE type variable
*/

/*
 fputc(input[i],fp): fputc(character,file_pointer)
- This function is used to write character into the Buffer of File 
*/

/* 
fclose(fp): fclose(file_pointer)
- This functions write the content inside the Buffer into the actual file
- After flushing the content to file it destroys the Buffer and FILE variable from RAM
 */