// Aluno: Jeferson S. M. de Souza
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HUMAN 1
#define EXACT 1
#define BIOMEDICAL 1

void scanner(char input[], int len){
    fflush(stdin);
    if (!fgets(input, len, stdin)) { 
        printf("Deu erro nessa bodega");
    }
    len = strlen(input);
    if (input[len - 1] == '\n') input[--len] = 0;
}

typedef struct Book{
    int code;
    char donated[3];
    char clear[50];
    char title[50];
    char author[50];
    char publishingCompany[50];
    int pagesNumber;
}Book;

void setBookAll(Book book[], int length) {
    int index = 0;
    for ( index = 0; index < length; index++ ){
        printf("\nLivro %i:", index);
        
        printf("\n\tCod. da obra: ");
        scanf("%d", &book[index].code);
        
        printf("\n\tTitulo da obra: ");
        scanner(book[index].title, 50);

        printf("\n\tAutor da obra: ");
        scanner(book[index].author, 50);

        printf("\n\tEditora: ");
        scanner(book[index].publishingCompany, 50);

        do {
            printf("\n\tDoado? (Sim/Nao): ");
            scanner(book[index].donated, 4);
        } while ( strcmp(book[index].donated, "Sim" ) != 0 
                    && strcmp(book[index].donated, "Nao" ) != 0 );
        
        printf("\n\tNumero de paginas: ");
        scanf("%d", &book[index].pagesNumber);
    }
}
void getBook(Book book[], int length) {
    int index = 0;
    for ( index = 0; index < length; index++ ){
        printf("\nLivro %i:", index);
        showBook(book[index]);
    }
}
void deleteByCode(Book book[], int length){
    int index, code;
    printf("\nDigite o codigo do livro:");
    scanf("%d", &code);
    for ( index = 0; index < length; index++ ) {
        if (book[index].code == code){ 
            book[index].code = NULL;
            book[index].pagesNumber= NULL;
            book[index].author[0] = "\0";
            book[index].publishingCompany[0] = "\0";
            book[index].donated[0] = "\0";
            printf("Livro deletado");
        }
    }
}
void showBook(Book book){
    printf("\n\tCod.: %i", book.code);
    printf("\n\t%s - %s",  book.title, book.author);    
    printf("\n\t%i pags.",book.pagesNumber);
    printf("\n\tEditora: %s",book.publishingCompany);   
    printf("\n\tDoado?: %s",book.donated);        
}
void searchByCode(Book book[], int length){
    int index, code;
    printf("\nDigite o codigo do livro:");
    scanf("%i", &code);
    for ( index == 0; index < length; index++ ) {
        if (book[index].code == code){ 
            showBook(book[index]);
        }
    }
}
void updateByCode(Book book[], int length){
    int index, code;
    printf("\nDigite o codigo do livro:");
    scanf("%i", &code);
    for ( index = 0; index < length; index++ ) {
        printf("ok");
        if (book[index].code == code){ 
            printf("\n\tCod. da obra: ");
            scanf("%d", &book[index].code);
            
            printf("\n\tTitulo da obra: ");
            scanner(book[index].title, 50);

            printf("\n\tAutor da obra: ");
            scanner(book[index].author, 50);

            printf("\n\tEditora: ");
            scanner(book[index].publishingCompany, 50);

            do {
                printf("\n\tDoado? (Sim/Nao): ");
                scanner(book[index].donated, 4);
            } while ( strcmp(book[index].donated, "Sim" ) != 0 
                        && strcmp(book[index].donated, "Nao" ) != 0 );
            
            printf("\n\tNumero de paginas: ");
            scanf("%d", &book[index].pagesNumber);
        }
    }
}
void searchByName(Book book[], int length){
    int index;
    char title[50];
    printf("\nDigite o titulo do livro:");
    scanner(title, 50);

    for ( index == 0; index < length; index++ ) {
        if (strcmp(book[index].title, title) == 0 ){ 
            showBook(book[index]);
        }
    }
}
void getBookDonated(Book book[], int length, int donated) {
    int index = 0;
    for ( index = 0; index < length; index++ ){
        if (donated) {
            if(strcmp( book[index].donated, "Sim" ) == 0){
                showBook(book[index]);
            }
        } else {
            if(strcmp( book[index].donated, "Nao" ) == 0){
                showBook(book[index]);
            }
        } 
    }
}
void getBookPageInterval(Book book[], int length, int min, int max) {
    int index = 0;
    for ( index = 0; index < length; index++ ){
        if( book[index].pagesNumber >= min && book[index].pagesNumber <= max ){
            showBook(book[index]);
        }     
    }
}
void headerSearchCategory(){
    printf("\n--\nSelecione a categoria: (numero) ");
    printf("\n(1. Humanas, 2. Biomedicas, 3. Exatas, -1 Sair ) ");
}

int main(){
    //Declarações
    int index; 
    int codeSearch, categoryCodeSearch;
    char textSearch;

    Book *exact;
    Book *human;
    Book *biomedical;
    exact = (Book *) malloc(sizeof(exact) * EXACT);
    human = (Book *) malloc(sizeof(human) * HUMAN);
    biomedical = (Book *) malloc(sizeof(biomedical) * BIOMEDICAL);

    printf("\nLivros de Exatas: ");
    setBookAll(exact, EXACT);
    printf("\nLivros de Humanas: ");
    setBookAll(human, HUMAN);
    printf("\nLivros de Biomedicas: ");
    setBookAll(biomedical, BIOMEDICAL);

    printf("\n PESQUISAR POR CATEGORIA E CODIGO");
    do{
        headerSearchCategory();
        scanf("%d", &categoryCodeSearch);

        switch ( categoryCodeSearch ){
            case -1:
                break;
            case 1:
                searchByCode(human,HUMAN);
                break;
            case 2:
                searchByCode(biomedical,BIOMEDICAL);
                break;
            case 3:
                searchByCode(exact,EXACT);
                break;
            
            default:
                printf("Erro: categoria nao existe");
                break;
        }

    }while(categoryCodeSearch != -1);

    printf("\n PESQUISAR POR CATEGORIA E TITULO");
    do{
        headerSearchCategory();
        scanf("%d", &categoryCodeSearch);
        switch ( categoryCodeSearch ){
            case -1:
                break;
            case 1:
                searchByName(human,HUMAN);
                break;
            case 2:
                searchByName(biomedical,BIOMEDICAL);
                break;
            case 3:
                searchByName(exact,EXACT);
                break;
            
            default:
                printf("Erro: categoria nao existe");
                break;
        }
    }while(categoryCodeSearch != -1);

    printf("\nLivros doados:");
    printf("\n  Biomedicas:");
    getBookDonated(biomedical, BIOMEDICAL, 1);
    printf("\n  Humanas:");
    getBookDonated(human, HUMAN, 1);
    printf("\n  Exatas:");
    getBookDonated(exact, EXACT, 1);
    
    //pags
    int min = 100;
    int max = 300;
    printf("\nLivros com pag entre %d e %d", min, max);
    printf("\n  Biomedicas:");
    getBookPageInterval(biomedical, BIOMEDICAL, min, max);
    printf("\n  Humanas:");
    getBookPageInterval(human, HUMAN, min, max);
    printf("\n  Exatas:");
    getBookPageInterval(exact, EXACT, min, max);

    printf("\n ATUALIZAR");
    headerSearchCategory();
    scanf("%i", &categoryCodeSearch);

    switch ( categoryCodeSearch ){
        case -1:
            break;
        case 1:
            updateByCode(human,HUMAN);
            break;
        case 2:
            updateByCode(biomedical,BIOMEDICAL);
            break;
        case 3:
            updateByCode(exact,EXACT);
            break;
        
        default:
            printf("Erro: categoria nao existe");
            break;
    }

    printf("\n DELETAR");
    headerSearchCategory();
    scanf("%i", &categoryCodeSearch);
    switch ( categoryCodeSearch ){
        case 1:
            deleteByCode(exact,EXACT);
            break;
        case 2:
            deleteByCode(biomedical,BIOMEDICAL);
            break;
        case 3:
            deleteByCode(exact,EXACT);
            break;
        
        default:
            printf("Erro: categoria nao existe");
            break;
    }
    free(exact);
    free(human);
    free(biomedical);
    return 0;
}