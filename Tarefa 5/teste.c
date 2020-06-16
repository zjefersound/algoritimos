#include <stdio.h>

#define EXACT 2

typedef struct Book{
    int code;
    char donated[3];
    char name[50];
    char author[50];
    char publishingCompany[50];
    int pagesNumber;
}Book;

void setBook(struct Book *book) {

    printf("\n\tNome da obra:");
    scanf("%s", (*book).name);
    
    printf("\n\tAutor da obra:");
    scanf("%s", (*book).author);
    
    do {
        printf("\n\tDoado? (Sim/Nao): ");
        scanf("%s", (*book).donated);
    } while ( strcmp((*book).donated, "Sim" ) != 0 
                && strcmp((*book).donated, "Nao" ) != 0 );
    
    printf("\n\tEditora: ");
    scanf("%s", (*book).publishingCompany);

    printf("\n\tNumero de paginas: ");
    scanf("%i", &(*book).pagesNumber);

    return (*book);
}

void setBooks(struct Book *book[], int length) {
    int bookIndex;
    for ( bookIndex = 0; bookIndex < length; bookIndex++ ) {
        setBook(&(*book)[bookIndex]);
    }
}

int main() {
    int bookIndex;
    Book exact[EXACT];

    printf("\nPreencha os dados para os livros de exatas");

    setBooks(&exact, EXACT);
    


    printf("%s",exact[1].author);
    
    return 0;
}