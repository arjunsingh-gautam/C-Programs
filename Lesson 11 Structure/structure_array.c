//Structure Array
#include<stdio.h>
#include<string.h>
int main()
{
    struct Book{
        int bookid;
        char title[20];
        float price;
    };
    struct Book b[2];// Structur array
    b[0].bookid=1;
    strcpy(b[0].title,"Mastery");
    b[0].price=890.29;
    b[1].bookid=2;
    strcpy(b[1].title,"Power");
    b[1].price=780.30;
    printf("Book 2 details:\n%d\n%s\n%.2f\n",b[1].bookid,b[1].title,b[1].price);

}