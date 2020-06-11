//Aluno: Jeferson Souza
#include <stdio.h>
#include <stdlib.h>

//Funções
float Porcento(float percentual, float valor){//Calcula percentual de um valor    
    return valor*percentual/100;
}
float Valida_sal(float sbruto){
    if(sbruto<0){
        return sbruto *= -1;
    }else{
        return sbruto;
    }
}
float Desconto(float sbruto){
    //Desconto de imposto de renda e encargos
    float desc = 0;
    
    if( sbruto < 800 ) {
        desc = 0; 
    }else if( sbruto <= 1600 ) {
        desc = Porcento(8, sbruto) + Porcento(5, sbruto);
    }else {
        desc = Porcento(15, sbruto) +Porcento(7, sbruto);
    }
    return desc;
}

float Adicional(float sbruto, float htrab){
    //Adicionais de hora extra
    float adic = 0;
    if(htrab > 160){
        float valor_hora = sbruto / 160;
        adic = Porcento(150, (htrab-160) * valor_hora);
    }
    return adic;
}
//Função principal
void main(){
    //Declaração das variáveis
    float   sal_bruto, // Salário bruto
            sal_liquido, // Sal Líquido
            total_sal_liquido, // Total de todos os salários líquidos
            horas_trab, // Horas trabalhadas no mês
            desconto, // Desconto
            adicional; // Adicional
    printf("------------------------------------------------- \n \n");
    printf("Algoritmo pra calcular Salario Liquido \n \n");
    printf("------------------------------------------------- \n \n");
    do{
        //Interações
        printf("Digite o salario bruto (0 para sair): R$");
        scanf("%f", &sal_bruto);
        //Validação pra sair
        if (!sal_bruto){
            break;
        }
        printf("Digite as horas trabalhadas no mes:");
        scanf("%f", &horas_trab);
        
        //Processamento
        sal_bruto = Valida_sal(sal_bruto);
        desconto = Desconto(sal_bruto);
        adicional = Adicional(sal_bruto, horas_trab);

        //Calcular salário líquido
        sal_liquido = sal_bruto - desconto + adicional;

        //Soma total dos salários líquidos
        total_sal_liquido += sal_liquido;
        
        //Mostrar sal liquido 
        printf("\n\nO salario liquido e R$%.2f \n", sal_liquido);

        printf("------------------------------------------------- \n \n");
    }while ( sal_bruto != 0 );

    printf("\n\n\n\nO total de todos os salarios liquidos e = R$%.2f \n\n",total_sal_liquido);
            
    //Caso queira executar fora do IDE
    printf("Insira qualquer valor para sair:");
    scanf("%s");

} // <3 