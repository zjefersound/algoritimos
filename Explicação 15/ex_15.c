#include <stdio.h>
#define CIDADES 3

// 0 = A 
// 1 = B 
// 2 = C

int main(){
    int tempoEntre[CIDADES][CIDADES];
    // Cidade 1, Cidade 2
    int cidade1, cidade2;
    int ler_cidade1, ler_cidade2;
    int tempoAtual;

    for ( cidade1 = 0; cidade1 < CIDADES; cidade1++ ) {
        for ( cidade2 = cidade1; cidade2 < CIDADES; cidade2++ ) {
            if ( cidade1 != cidade2 ) {
                printf("\nDigite o tempo de  %i para %i  :  ", cidade1, cidade2);
                scanf("%i", &tempoAtual);
                tempoEntre[cidade1][cidade2] = tempoAtual;
                tempoEntre[cidade2][cidade1] = tempoAtual;
            }else{
                tempoEntre[cidade1][cidade2] = 0;
            }
        }
    }

    for ( cidade1 = 0; cidade1 < CIDADES; cidade1++ ) {
        for ( cidade2 = 0; cidade2 < CIDADES; cidade2++ ) {
            printf("%i    ", tempoEntre[cidade1][cidade2] );
        }
        printf("\n");
    }

    do {
        printf("\nDigite cidade 1: ");
        scanf("%i", &ler_cidade1);

        printf("\nDigite cidade 2: ");
        scanf("%i", &ler_cidade2);

        printf("\nTempo = %i", tempoEntre[ler_cidade1][ler_cidade2]);

    } while ( ler_cidade1 != ler_cidade2 );


    return 0;
}
