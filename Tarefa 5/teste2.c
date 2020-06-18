#include <stdio.h>

typedef struct {
    char nome[30];
    int idade;
    float notas[9];
}Pessoa;

void setPessoas(Pessoa vet[], int i) {
    int j = 0;
    for ( j = 0; j < i; j++ ){
        scanf("%i", &vet[j].idade);
        scanf("%s", vet[j].nome);
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

char scanner(char input[], int len){
    if (!fgets(input, len, stdin)) { /* tratamento de erro */ }
    len = strlen(input);
    if (input[len - 1] == '\n') input[len - 1] = 0; // remove '\n' e actualiza len 
    return input;
}
    
void main() {
    char apelido[3];
    scanner(apelido, 3);
    printf("AAAA-%s---",apelido);


}