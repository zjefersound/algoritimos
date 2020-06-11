//Aluno: Jeferson Souza
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,cont,cont_fat,fat,i; // N, contador do loop principal, contador do fatorial, fatorial
    float e; // E

    e = 1; // Isso é pq o E recebe 1 só uma vez e sempre
    printf("Send the N value: \n");
    scanf("%d", &n);
    //Validação para ser inteiro e positivo
    if(n > 0){
        cont = 1;
        while (cont <= n){
            fat = 1; 
            //Fazer o fatorial do contador
            
            for (i=1;i<=cont;i++){
                fat *= i; 
            }
            e += 1 / (float)fat; 

            cont -= -1;
        }
        printf("The E value is = %f \n",e);
    }else{
        printf("Negative number \n");
    }

    //Caso queira executar fora do IDE
    printf("Input any value to exit:");
    scanf("%s");
    
    return 0;
} // <3