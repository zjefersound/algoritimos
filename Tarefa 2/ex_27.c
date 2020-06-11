//Aluno: Jeferson Souza
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração das variáveis 
    float salario,ind_aumento,aumento,salario_final;//Índice de aumento

    //Interação
    printf("Algoritimo para calcular aumento de salario: \n");
    
    printf("Digite seu salario: \n");
    scanf("%f",&salario);

    //Verificar
    if(salario<=300){
        ind_aumento = 0.1;
    }else if(salario<=600){
        ind_aumento = 0.11;
    }else if(salario<=900){
        ind_aumento = 0.12;
    }else if(salario<=1500){
        ind_aumento = 0.06;
    }else if(salario<=2000){
        ind_aumento = 0.03;
    }else{
        ind_aumento = 0;
    }

    //Calculos
    aumento = salario * ind_aumento;
    salario_final = salario + aumento;

    //Saída
    printf("Seu salario atual e de R$%.2f \n",salario);
    printf("Seu aumento e de R$%.2f \n",aumento);
    printf("Seu salario com aumento e de R$%.2f \n",salario_final);
    
    //Caso queira executar fora do IDE
    printf("Insira qualquer valor para sair:");
    scanf("%s");

    return 0;
} // <3