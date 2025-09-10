// Writing in file using fwrite
#include<stdio.h>
int main()
{
    int records;
    typedef struct{
        char name[100];
        int age;
        char email[100];
    }Student;
    FILE *fp=fopen("Student_Records.txt","wb+");

    printf("How many student record you want to enter:");
    scanf("%d",&records);
    Student Records[records];
    for(int i=0;i<records;i++)
    {
        printf("Enter Details of Student-%d\n",i+1);
        printf("Enter name of Student-%d:",i+1);
        fflush(stdin);
        fgets(Records[i].name,sizeof(Records[i].name),stdin);
        fflush(stdin);
        printf("Enter age of Student-%d:",i+1);
        scanf("%d",&Records[i].age);
        fflush(stdin);
        printf("Enter email of Student-%d",i+1);
        fgets(Records[i].email,sizeof(Records[i].email),stdin);
        fflush(stdin);

        // Writing Record in file:
        fwrite(&Records[i],sizeof(Records[i]),1,fp);    
    }
 
    return 0;
}