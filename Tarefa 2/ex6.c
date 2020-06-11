//Aluno: Jeferson Souza
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Altura em centímetros
    //Joao
    int altura_joao = 150; 
    int cres_joao = 2;
    //Ze
    int altura_ze = 110;
    int cres_ze = 3;
    //Contador
    int ano = 0;

    //Loop
    while(altura_ze <= altura_joao){
        altura_joao += cres_joao;
        altura_ze += cres_ze;
        ano++;
    }
    
    printf("Sao necessarios %d anos para que o Ze seja maior q o Joao \n",ano);

    //Caso queira executar fora do IDE
    printf("Input any value to exit:");
    scanf("%s");

    return 0;
} // <3