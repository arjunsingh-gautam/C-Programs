//Taking user input
#include<stdio.h>
#include<string.h>
int main()
{
    struct Book{
        int book_id;
        char title[20];
        float price;
};
    struct Book b3;
    printf("Enter book id,title and price:");
    scanf("%d",&b3.book_id);
    fflush(stdin);// clears the buffer to take new input properly
    fgets(b3.title,20,stdin);
    fflush(stdin);
    scanf("%f",&b3.price);
    printf("Book ID:%d\nBook Title:%s\nBook Price:%.1f",b3.book_id,b3.title,b3.price);    
}