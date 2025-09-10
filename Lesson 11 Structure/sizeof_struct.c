// This Code we calculate the size allocated to a structure

#include<stdio.h>
int main()
{
    // structure definition
    struct Student{
        char name[20];
        int student_id;
        float student_gpa;
    };
    
    // structure declaration
    struct Student s1;
    printf("Size of struct definition:%d bytes\n",sizeof( struct Student));
    printf("Size of strucutre s1:%d bytes",sizeof(s1));
    printf("\n");
    printf("Size of structure elements:\n");
    printf("Size of name:%d bytes\nSize of student_id:%d bytes\nSize of student_gpa:%d bytes",sizeof(s1.name),sizeof(s1.student_id),sizeof(s1.student_gpa));
    return 0;
}

/*  Output:
Size of strucutre:28 bytes
Size of structure elements:
Size of name:20 bytes
Size of student_id:4 bytes
Size of student_gpa:4 bytes
 */