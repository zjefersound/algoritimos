#include <stdio.h>

typedef struct {
    char nome[30];
    int idade;
    float notas[9];
}Pessoa;

void setPessoas(Pessoa vet[], int i) {
    int j = 0;
    for ( j = 0; j < i; j++ ){
        scanf("%s", vet[j].nome);
        scanf("%i", &vet[j].idade);
        scanf("%f", &vet[j].notas);
    }

}
void getPessoas(Pessoa vet[], int i) {
    int j = 0;
    for ( j = 0; j < i; j++ ){
        printf("%s", vet[j].nome);
        printf("%i", vet[j].idade);
        printf("%f", vet[j].notas);
    }

}

    
void main() {
    Pessoa group[3];
    setPessoas(group,3);
    getPessoas(group,3);
    
}