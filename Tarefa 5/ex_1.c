// Aluno: Jeferson S. M. de Souza
#include <stdio.h>
#include <string.h>

#define HUMAN 2
#define EXACT 2
#define BIOMEDICAL 2

typedef struct{
    int code;
    char donated[3];
    char name[50];
    char author[50];
    char publishingCompany[50];
    int pagesNumber;
}Book;

void main() {
    //Declarações
    int bookIndex; // número de catalogação universal entre todas as categorias
    Book exact[EXACT];
    Book human[HUMAN];
    Book biomedical[BIOMEDICAL];

    //Ler livros de humanas
    printf("\nPreencha os dados para os livros de humanas");

    for ( bookIndex = 0; bookIndex < HUMAN; bookIndex++ ) {
        human[bookIndex].code = bookIndex;

        printf("\nLivro atual: %i", bookIndex);
        
        printf("\n\tNome da obra:");
        scanf("%s", &human[bookIndex].name);
        
        printf("\n\tAutor da obra:");
        scanf("%s", &human[bookIndex].author);
        
        do {
            printf("\n\tDoado? (Sim/Nao): ");
            scanf("%s", &human[bookIndex].donated);
        } while ( strcmp(human[bookIndex].donated, "Sim" ) != 0 
                    && strcmp(human[bookIndex].donated, "Nao" ) != 0 );
        
        printf("\n\tEditora: ");
        scanf("%s", &human[bookIndex].publishingCompany);

        printf("\n\tNumero de paginas: ");
        scanf("%i", &human[bookIndex].pagesNumber);

    }

    //Ler livros de biomedicas
    printf("\nPreencha os dados para os livros de humanas");

    for ( bookIndex = 0; bookIndex < BIOMEDICAL; bookIndex++ ) {
        biomedical[bookIndex].code = bookIndex;

        printf("\nLivro atual: %i", bookIndex);
        
        printf("\n\tNome da obra:");
        scanf("%s", &biomedical[bookIndex].name);
        
        printf("\n\tAutor da obra:");
        scanf("%s", &biomedical[bookIndex].author);
        
        do {
            printf("\n\tDoado? (Sim/Nao): ");
            scanf("%s", &biomedical[bookIndex].donated);
        } while ( strcmp(biomedical[bookIndex].donated, "Sim" ) != 0 
                    && strcmp(biomedical[bookIndex].donated, "Nao" ) != 0 );
        
        printf("\n\tEditora: ");
        scanf("%s", &biomedical[bookIndex].publishingCompany);

        printf("\n\tNumero de paginas: ");
        scanf("%i", &biomedical[bookIndex].pagesNumber);

    }

    //Ler livros de Exatas
    printf("\nPreencha os dados para os livros de EXATAS");

    for ( bookIndex = 0; bookIndex < HUMAN; bookIndex++ ) {
        human[bookIndex].code = bookIndex;
        printf("\nLivro atual: %i", bookIndex);
        
        printf("\n\tNome da obra:");
        scanf("%s", &exact[bookIndex].name);
        
        printf("\n\tAutor da obra:");
        scanf("%s", &exact[bookIndex].author);
        
        do {
            printf("\n\tDoado? (Sim/Nao): ");
            scanf("%s", &exact[bookIndex].donated);
        } while ( strcmp(exact[bookIndex].donated, "Sim" ) != 0 
                    && strcmp(exact[bookIndex].donated, "Nao" ) != 0 );

        printf("\n\tEditora: ");
        scanf("%s", &exact[bookIndex].publishingCompany);

        printf("\n\tNumero de paginas: ");
        scanf("%i", &exact[bookIndex].pagesNumber);

    }
    
    // listagem
    printf("\n|TTTTT  --------");
    printf("\n|TTTTT  Livros");
    printf("\n|TTTTT  --------");

}

