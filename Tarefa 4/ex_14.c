#include <stdio.h>
#define QUESTOES 10
#define ALUNOS 10

void main() {
    //Vars de armazenamento
    char respostas[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
    char inputText[1];
    int acertos[ALUNOS] = {0};
    //Vars de controle
    int aluno, questao;

    //ler gabarito
    printf("\nLer gabarito:");
    for ( questao = 0; questao < QUESTOES; questao++ ) {
        printf("\nQuestao %i:", questao);
        if ( questao == 0 ) {
            scanf("%c", &inputText);
        } else {
            scanf("\n%c", &inputText);
        }
        gabarito[questao] = inputText[0];
    }
    //ler respostar por aluno
    for (aluno = 0; aluno < ALUNOS; aluno++) {
        printf("\nAluno %i:", aluno);
        for ( questao = 0; questao < QUESTOES; questao++ ) {
            printf(" questao %i:", questao);
            scanf("\n%c", &respostas[aluno][questao]);
        }
    }
    for (aluno = 0; aluno < ALUNOS; aluno++) {
        for ( questao = 0; questao < QUESTOES; questao++ ) {
            if ( gabarito[questao] == respostas[aluno][questao] ) {
                acertos[aluno]++;
            }
        }
    }

    printf("-------------------Resultados-------------------");

    //Mostrar resultados
    for (aluno = 0; aluno < ALUNOS; aluno++) {
        printf("\n Aluno %i :",aluno);
        for ( questao = 0; questao < QUESTOES; questao++ ) {
            printf("   %c", respostas[aluno][questao] ); 
        }
        printf("   acertos: %i", acertos[aluno]);
    }

    printf("\n---------------------Gabarito--------------------\n");
    for ( questao = 0; questao < QUESTOES; questao++ ) {
        printf("    %c", gabarito[questao]);
    }   

}