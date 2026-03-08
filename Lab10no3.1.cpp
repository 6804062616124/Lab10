#include <stdio.h>

typedef struct{
    int id;
    char title[50];
}Book;

void showBook(Book b);

int main(){

    Book b;

    printf("Enter Book ID : ");
    scanf("%d",&b.id);

    printf("Enter Book Title : ");
    scanf("%s",b.title);

    showBook(b);

    return 0;
}

void showBook(Book b){

    printf("Book ID : %d\n",b.id);
    printf("Book Title : %s\n",b.title);

}
