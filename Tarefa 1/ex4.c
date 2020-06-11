//Aluno: Jeferson Souza
#include <stdio.h>

int main(){

    int n,cont; // N, contador
    float e; // E

    e = 1; // Isso é pq o E recebe 1 só uma vez e sempre

    printf("Send the N value: \n");
    scanf("%d", &n);

    //Validação para ser inteiro e positivo
    if(n > 0){
        //Loop simplão mesmo
        for (cont = 1; cont <= n; cont++ ){
            e += 1 / (float) cont; 
        }
        printf("The E value is = %f",e);
    }else{
        printf("Negative number");
    }

    return 0;
}// <3