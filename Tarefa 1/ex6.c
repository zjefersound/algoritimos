//Aluno: Jeferson Souza
#include <stdio.h>

int main(){
    //Altura em centímetros
    //Joao
    int altura_joao = 150; 
    int cres_joao = 2;
    //Ze
    int altura_ze = 110;
    int cres_ze = 3;
    //Contador
    int ano;

    //Loop
    for(ano = 1; altura_ze <= altura_joao; ano++){
        altura_joao += cres_joao;
        altura_ze += cres_ze;
    }
    
    printf("Sao necessarios %d anos para que o Ze seja maior q o Joao \n",ano-1);

    return 0;

} // <3