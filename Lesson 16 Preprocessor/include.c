// In this command we will study about #include: Preprocessor directive

/* #include: Preprocessor directive used to include header files or code from other source file
- After preprocessing a .i file is created which include the code of header file or source file included using `#include` directive 
- To include headerfile: #include <header file>
- To include source code: #include "path_source_file"
*/
#include<stdio.h>
#include "D:\Desktop\C_Programs\Lesson 16 Preprocessor\external.c"
extern void greet();
int main()
{
    printf("Hello from internal file\n");
    greet();
    return 0;
}