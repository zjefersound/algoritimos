//Aluno: Jeferson Souza
#include <stdio.h>
#include <stdlib.h>

//Funções
float Media_simples(float n1, float n2){
    return (n1 + n2)/2;
}
float Valida_nota(float nota){// Força a nota a estar entre 0 e 10
    if(nota < 0){
        return 0;
    }else if(nota > 10){
        return 10;
    }else{
        return nota;
    }
}
int Status(float nota){
    if(nota <= 5){
        printf("reprovado");
        return 0;
    }else if(nota < 7){
        printf("recuperacao");
        return 1;
    }else if(nota <= 10){
        printf("aprovado");
        return 2;
    }
}

//Função principal
void main(){
    //Declaração das variáveis
    float   nota1,
            nota2,
            media,
            media_geral;

    int     status,
            aprovados = 0,
            recuperacao = 0,
            reprovados = 0,
            alunos = 6; //Fica flexivel 
    printf("%f \n",Media_simples(9,7));
    printf("------------------------------------------------- \n \n");
    printf("Algoritmo: Media das notas de %d alunos \n \n",alunos);
    printf("------------------------------------------------- \n \n");
    int i;
    for(i = 0; i < alunos; i++){
        //Interação
        printf("Aluno %d:\n", i+1 );
        printf("------------------------------------------------- \n");
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);

        //Validar notas
        nota1 = Valida_nota(nota1);
        nota2 = Valida_nota(nota2);
        //Calculos
        media = Media_simples(nota1,nota2);
        status = Status(media); 
        //Contabiliza
        switch (status){
            case 0:
                reprovados++;
                break;
            case 1:
                recuperacao++;
                break;
            case 2:
                aprovados++;
                break;
        }

        /**Deculpa psor n pensei em nenhuma solução declarativa :(
         * A lógica aqui é de que:
         * (X + Y)/N = X/N + Y/N
         */
        media_geral += media / (float) alunos;

        //Mostrar média
        printf("\nMedia=%.2f\n",media);
  
        printf("------------------------------------------------- \n\n\n");

    }
    printf("RELATORIO:\n");
    printf("Media geral=%.2f\n",media_geral);
    printf("Aprovados=%d\n",aprovados);
    printf("Recuperacao=%d\n",recuperacao);
    printf("Reprovados=%d\n",reprovados);


    //Caso queira executar fora do IDE
    printf("Insira qualquer valor para sair:");
    scanf("%s");

} // <3 