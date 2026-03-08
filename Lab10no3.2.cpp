#include <stdio.h>

typedef struct{
    int id;
    char title[50];
}Book;

void show(Book *b);

int main(){

    Book b;

    printf("Enter Book ID : ");
    scanf("%d",&b.id);

    printf("Enter Book Title : ");
    scanf("%s",b.title);

    show(&b);

    return 0;
}

void show(Book *b){

    printf("Book ID : %d\n",b->id);
    printf("Book Title : %s\n",b->title);

}
