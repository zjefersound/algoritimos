//Aluno: Jeferson Souza
#include <stdio.h>

int main(){
    int n,cont,cont_fat,fat; // N, contador do loop principal, contador do fatorial, fatorial
    float e; // E

    e = 1; // Isso é pq o E recebe 1 só uma vez e sempre
    printf("Send the N value: \n");
    scanf("%d", &n);
    //Validação para ser inteiro e positivo
    if(n > 0){
        for (cont = 1; cont <= n; cont -= -1){ //hehe
            fat = 1; 
            //Fazer o fatorial do contador
            for(cont_fat = cont; cont_fat >= 1; cont_fat--){
                fat *= cont_fat; 
            }
            e += 1 / (float)fat; 

        }
        printf("The E value is = %f",e);
    }else{
        printf("Negative number");
    }

    return 0;
} // <3