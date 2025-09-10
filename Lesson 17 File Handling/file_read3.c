// Reading from a file using fread()
#include<stdio.h>
int main()
{
    typedef struct{
        char name[100];
        int age;
        char email[100];
    }Student;
    FILE *fp=fopen("Student_Records.txt","rb");

    Student s;

    while(fread(&s,sizeof(s),1,fp)!=0)
    {
        printf("%s %d %s\n",s.name,s.age,s.email);
    }
}