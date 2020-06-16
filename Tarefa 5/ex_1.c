// Aluno: Jeferson S. M. de Souza
#include <stdio.h>
#include <string.h>
#include <conio.h>

#define clrscr() printf("\e[1;1H\e[2J")
#define HUMAN 2
#define EXACT 2
#define BIOMEDICAL 2

typedef struct Book{
    int code;
    char donated[3];
    char name[50];
    char author[50];
    char publishingCompany[50];
    int pagesNumber;
}Book;

void setBook(Book book[], int length) {
    int bookIndex;
    for ( bookIndex = 0; bookIndex < length; bookIndex++ ) {
        book[bookIndex].code = bookIndex;
        printf("\n\tNome da obra:");
        scanf("%s", book[bookIndex].name);
        
        printf("\n\tAutor da obra:");
        scanf("%s", book[bookIndex].author);
        
        do {
            printf("\n\tDoado? (Sim/Nao): ");
            scanf("%s", &book[bookIndex].donated);
        } while ( strcmp(book[bookIndex].donated, "Sim" ) != 0 
                    && strcmp(book[bookIndex].donated, "Nao" ) != 0 );
        
        printf("\n\tEditora: ");
        scanf("%s", &book[bookIndex].publishingCompany);

        printf("\n\tNumero de paginas: ");
        scanf("%i", &book[bookIndex].pagesNumber);
    }

}
void getBook(struct Book *book){
    printf("\n=============Livro %i================", (*book).code );
    printf("\nNome da obra: %s", (*book).name);
    printf("\nAutor: %s", (*book).author);
    printf("\nDoado?: %s", (*book).donated);
    printf("\nEditora: %s", (*book).publishingCompany);
    printf("\nNumero de pags: %i", (*book).pagesNumber);
    printf("\n");
}

void searchHeader() {
    printf("\n------------------------------------------------");
    printf("\n----                           oOo        ------");
    printf("\n----       PESQUISAR          O   O       ------");
    printf("\n----        LIVROS             oOoIL      ------");
    printf("\n----                               `IL    ------");
    printf("\n------------------------------------------------");
}

void searchCodeCategory(){

}

void main() {
    //Declarações
    int bookIndex; 
    int codeSearch, categoryCodeSearch;
    char textSearch;

    Book exact[EXACT];
    Book human[HUMAN];
    Book biomedical[BIOMEDICAL];

    //Ler livros de humanas
    printf("\nPreencha os dados para os livros de humanas");

    
    setBook(human,HUMAN);


    searchHeader(); 
    

    do {
        printf("\n------------------------------------------------");
        printf("\nSelecione a categoria: (numero) ");
        printf("\n(1. Humanas, 2. Biomedicas, 3. Exatas ) ");
    
        scanf("%i", &categoryCodeSearch);
    
        printf("\n------------------------------------------------");    
        if ( categoryCodeSearch >= 1 && categoryCodeSearch <= 3) {
            printf("\nDigite o codigo:");
            scanf("%i", &codeSearch);   
        } else {
            printf("\nCategoria inexistente!!\n\n");
        }
        if ( codeSearch == -1 || categoryCodeSearch == -1 ) {
            break;
        }
        switch (categoryCodeSearch){
            case 1:
                if ( human[codeSearch].name && codeSearch < HUMAN ) {
                    printf("\n=============Livro %i de humanas =======", codeSearch);
                    printf("\nNome da obra: %s", human[codeSearch].name);
                    printf("\nAutor: %s", human[codeSearch].author);
                    printf("\nDoado?: %s", human[codeSearch].donated);
                    printf("\nEditora: %s", human[codeSearch].publishingCompany);
                    printf("\nNumero de pags: %i", human[codeSearch].pagesNumber);
                    printf("\n");
                } else {
                    printf("\nLivro nao encontado!\n");
                }
                break;
            case 2:
                if ( biomedical[codeSearch].name && codeSearch < HUMAN ) {
                    printf("\n=============Livro %i de humanas =======", codeSearch);
                    printf("\nNome da obra: %s", biomedical[codeSearch].name);
                    printf("\nAutor: %s", biomedical[codeSearch].author);
                    printf("\nDoado?: %s", biomedical[codeSearch].donated);
                    printf("\nEditora: %s", biomedical[codeSearch].publishingCompany);
                    printf("\nNumero de pags: %i", biomedical[codeSearch].pagesNumber);
                    printf("\n");
                } else {
                    printf("\nLivro nao encontado!\n");
                }
                break;
            
            default:
                break;
        }
        printf("\n------------------------");
        printf("\nDigite ( -1 ) para sair!");    
        printf("\n------------------------");

        
    } while ( codeSearch != -1 && categoryCodeSearch != -1 );

}

