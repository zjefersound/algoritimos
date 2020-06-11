//Aluno: Jeferson Souza
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração das variáveis 
    float sal_min = 937; //Salário mínimo
    char cpf[11];
    int n_dep; //Número de dependentes
    float aliquota, desconto, renda_mensal, imposto;

    //Interação
    printf("Calcular imposto de renda:\n");

    printf("Digite seu cpf: \n");
    scanf("%s",&cpf);

    printf("Digite sua renda mensal: \n");
    scanf("%f",&renda_mensal);

    printf("Digite o numero de dependentes: \n");
    scanf("%d",&n_dep);

    //Funções
    //Já dizia o professor: "Se tem q fazer o msm cálculo mais de uma vez já tá errado"
    float calc_desc (int num){
        return (sal_min*0.05*(float)num);
    }
    float calc_imposto (int porcentagem){
        return (renda_mensal*(float)porcentagem/100)-desconto;
    }
    //Desconto
    if(n_dep >= 0){//validaçãozinha hehe
        switch (n_dep){
            case 0:
                desconto = calc_desc(n_dep);
                break;

            case 1:
                desconto = calc_desc(n_dep);
                break;
                
            case 2:
                desconto = calc_desc(n_dep);
                break;

            default:
                desconto = calc_desc(3);
                break;
        }
    }else{
        desconto = 0;//valor padrão caso for inválido
    }

    //Imposto
    if(renda_mensal <= 2*sal_min){
        imposto = calc_imposto(0);

    }else if(renda_mensal <= 3*sal_min){
        imposto = calc_imposto(5);

    }else if(renda_mensal <= 5*sal_min){
        imposto = calc_imposto(10);

    }else if(renda_mensal <= 7*sal_min){
        imposto = calc_imposto(15);
        
    }else{
        imposto = calc_imposto(20);
    }
    //validação
    if(imposto<=0){
        imposto = 0;
        printf("Prazer, usuario %s. Voce esta isento de imposto de renda. \n",cpf);
    }else{
        printf("Prazer, usuario %s seu imposto de renda e de R$%.2f. \n",cpf,imposto);
    }
    //Saída

    
    //Caso queira executar fora do IDE
    printf("Insira qualquer valor para sair:");
    scanf("%s");

    return 0;
} // <3