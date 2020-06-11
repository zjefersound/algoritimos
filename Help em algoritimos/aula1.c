#include <stdio.h>

void Soma(float a, float b){
    printf("%f", a + b);
}


void main(){
    //var
    char cpf[11];
    
    //interação
    scanf("%s",&cpf);
    printf("%s \n",cpf);
    Soma(8.5,2);

}