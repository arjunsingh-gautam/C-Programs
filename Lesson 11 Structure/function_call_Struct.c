//Function call by passing a Structure
#include<stdio.h>
struct Book{
        int bookid;
        char title[20];
        float price;                    
    };
void display(struct Book b);
int main()
{
    struct Book b1={1929,"Mastery",789.83};
    display(b1);// funtion call by passing structure
    return 0;
}
void display(struct Book b){
    printf("Book Details:\n");
    printf("Book ID:%d\nBook Title:%s\nBook Price:%.2f\n",b.bookid,b.title,b.price);
}