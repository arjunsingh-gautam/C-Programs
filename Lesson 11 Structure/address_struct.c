// In this code we will see how each element in struct have different address
#include<stdio.h>
int main()
{
    typedef struct{
        int age;
        char name[20];
        float marks_10;
    }Student;
    Student s1;
    printf("Address of struct:%p\n",&s1);
    printf("Address of int element:%p\n",&s1.age);
    printf("Address of float element:%p\n",&s1.marks_10);
    printf("Address of string element:%p\n",&s1.name);
}

/* 
Conclusion:
- In struct every element has different address
- These the reason we can read and write each element of struct  
*/