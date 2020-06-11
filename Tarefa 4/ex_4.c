//Aluno: Jeferson Souza
#include <stdio.h>
#define LENGTH 12

int main() {
    int n[LENGTH]; 
    int x[LENGTH] = {0}; 
    int y[LENGTH] = {0};
    int index, x_index = 0, y_index = 0; 
    // x e y index são para não ficarem espaços vazios

    //ler valores
    printf("Digite o valor para: \n");
    for (index = 0; index < LENGTH; index++ ) {
        printf("n[%d]: ", index);
        scanf("%d", &n[index]);
    }

    //copiar numeros
    for (index = 0; index < LENGTH; index++ ) {
        if( n[index] % 2 == 0 ) {
            //par
            if( n[index] % 3 == 0 ) {
                x[x_index] = n[index];
                x_index++;
            }
        }else {
            //ímpar
            if( n[index] % 5 == 0 ) {
                y[y_index] = n[index];
                y_index++;
            }
        }
    }

    //Mostrar vetores
    //vetor n
    for (index = 0; index < LENGTH; index++ ) {
        if( index == 0) {
            printf("\n n = [%d", n[index]);
        }else if( index < LENGTH ){
            printf(", %d", n[index]);
        }
        if(index == LENGTH-1){
            printf("]");
        }
    }
    //vetor x
    for (index = 0; index < x_index; index++ ) {
        if( index == 0) {
            printf("\n x = [%d", x[index]);
        }else if( index < x_index){
            printf(", %d", x[index]);
            if(index == x_index-1){
                printf("]");
            }
        }
    }
    //vetor y
    for (index = 0; index < y_index; index++ ) {
        if( index == 0) {
            printf("\n y = [%d", y[index]);
        }else if( index < y_index){
            printf(", %d", y[index]);
            if(index == y_index-1){
                printf("]");
            }
        }
    }

    printf("\n Digite algo para sair:");
    scanf("%s");
    return 0;
} // <3