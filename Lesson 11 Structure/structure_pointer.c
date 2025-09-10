//Structure Pointer 
#include<stdio.h>
#include<string.h>
int main()
{
    struct Book{
        int bookid;
        char title[20];
        float price;        
    }b;
    struct Book *ptr;//Structure Pointer
    ptr=&b;
    b.bookid=1;
    strcpy(b.title,"Mastery");
    b.price=250.50;
    printf("Book Detail:\nBook Id:%d\nBook Title:%s\nBook Price:%.2f\n",ptr->bookid,(*ptr).title,ptr->price);
}