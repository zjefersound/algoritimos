#include <stdio.h>
#include <string.h>

//Exemplo 1
struct Aluno {
    char nome[20];
    int idade;
    float notas[9];
};

//Exemplo 2
typedef struct {
    char nome[30];
    int idade;
    float notas[9];
}Pessoa;

typedef struct sProduto{
    int codigo;
    char descricao[20];
}Produto;

typedef struct Turma
{
    int cod;
    struct Aluno alunos[12];
};

    
void main() {
    
    struct Aluno aluno1, alunos[10];
    Pessoa pessoa1;
    pessoa1.idade = 18;

    Produto caixa;
    caixa.descricao;

    struct Turma cco;
    scanf("%s",cco.alunos[0].nome);
    cco.alunos[0].idade = 18;

    printf("%s",cco.alunos[0].nome);
    printf("%i",cco.alunos[0].idade);

    if ( strcmp( cco.alunos[0].nome, "Jeferson" ) == 0 ) {
        printf("São exatamente iguais");
    } else if ( strcmp(cco.alunos[0].nome, "Jeferson" ) < 0){
        printf("São diferentes");
    }
    int result;
    result = strcmp( cco.alunos[0].nome, "Jeferson");
    printf("\n\n\n%i",result); 
    // Para excluir joao = NULL 
    // strcmp
}