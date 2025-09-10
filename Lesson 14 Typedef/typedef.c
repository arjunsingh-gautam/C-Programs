#include<stdio.h>
int main()
{
    typedef int age;// here int is alias as age
    typedef struct{
        char name[20];
        age s_age;
    }Student; // Typedef create a alias for this structure as "Student"
    Student s1; // This create a struct 
    printf("Enter name of the student:");
    fgets(s1.name,20,stdin);
    fflush(stdin);
    s1.s_age=19;
    printf("\nName of student:%s\nAge of student:%d",s1.name,s1.s_age);
}