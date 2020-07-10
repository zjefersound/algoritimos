// Aluno: Jeferson S. M. de Souza
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2

void scanner(char input[]){
    int len = 9999;
    fflush(stdin);
    if (!fgets(input, len, stdin)) { 
        printf("Deu erro nessa bodega");
    }
    len = strlen(input);
    if (input[len - 1] == '\n') input[--len] = 0;
}

int isVogal(char letter){
    if (   letter == 'a'
        || letter == 'A'
        || letter == 'e'
        || letter == 'E'
        || letter == 'i'
        || letter == 'I'
        || letter == 'o'
        || letter == 'O'
        || letter == 'u'
        || letter == 'U'
    ) {
        return 1; 
    } else {
        return 0;
    }
    
}

typedef struct Car {
    char owner[50];
    char fuel[15];
    int year;
    char color[30];
    char model[30];
    int chassis;
    char plate[7];
}Car;

void setCars(Car car[]) {
    int plateIndex, index;
    char inputPlate[7];

    for ( index = 0; index < MAX; index++){
        printf("\nProprietario: ");
        scanner(car[index].owner);  

        printf("\nCombustivel: (alcool, diesel, gasolina)");
        scanner(car[index].fuel);    

        printf("\nModelo: ");
        scanner(car[index].model);   

        printf("\nCor: ");
        scanner(car[index].color); 

        printf("\nAno: ");
        scanf("%d", &car[index].year);
        printf("\nChassi: ");
        scanf("%d", &car[index].chassis);

        printf("\nPlate: ex.(ABC1234)");
        scanner(car[index].plate); 
    }
}

void getCar(Car car) {
    printf("\nProprietario: %s", car.owner);  

    printf("\nCombustivel: %s", car.fuel);    

    printf("\nModelo: %s", car.model);   

    printf("\nCor: %s", car.color); 

    printf("\nAno: %d", car.year);

    printf("\nChassi: %d", car.chassis);

    printf("\nPlate: %s", car.plate );
}

void getDieselCarOwnersByYear(Car car[], int year){
    printf("\nDonos de carros do ano de 1980 ou posterior e que sejam movidos a diesel");
    int index;
    for (index = 0; index < MAX; index++ ){
        if (car[index].year >= year && strcmp(car[index].fuel, "diesel" ) == 0) {
            printf("\nProprietario: %s", car[index].owner);  
        }
    }
    printf("\n");  
}
void getCarPlates(Car car[]){
    printf("\nPlacas que comecem com a letra A e terminem com 0, 2, 4 ou 7 e seus respectivos proprietarios");

    int index;
    for (index = 0; index < MAX; index++ ){
        if (
            car[index].plate[0] == 'A' 
            && (   car[index].plate[6] == '0' 
                || car[index].plate[6] == '2' 
                || car[index].plate[6] == '7' 
                || car[index].plate[6] == '4' 
            )
        ) {
            printf("\nPlate: %s", car[index].plate ); 
            printf("\nProprietario: %s", car[index].owner);  
        }
    }
    printf("\n");  
}
void getCarModelAndColor(Car car[]){
    printf("\nmodelo e a cor dos veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numericos fornece um numero par");
    int index, plateIndex, plateNumberSum = 0;
    for (index = 0; index < MAX; index++ ){
        plateNumberSum = 0;
        for ( plateIndex = 3; plateIndex < 7; plateIndex++ ) {
            plateNumberSum += (int) car[index].plate[plateIndex] - 48;
        }

        if (
            isVogal(car[index].plate[0]) &&
            plateNumberSum % 2  == 0
        ) {
            printf("\nModelo: %s", car[index].model);   

            printf("\nCor: %s", car[index].color); 
        }
    }
    printf("\n");  
}

void setCarOwnerByChassis(Car car[]){
    printf("\ntroca de proprietario com o fornecimento do numero do chassi apenas para carros com placas que nao possuem nenhum digito igual a zero");
    int index, chassis, plateIndex;
    printf("\nDigite o chassi: ");
    scanf("%d", chassis);

    for (index = 0; index < MAX; index++ ){
        if (
            car[index].chassis == chassis
            && car[index].plate[3] != 0
            && car[index].plate[4] != 0
            && car[index].plate[5] != 0
            && car[index].plate[6] != 0
        ) {
            printf("\nNovo Proprietario: ");
            scanner(car[index].owner); 
        }
    }
    printf("\n");  
}


void main(){
    //Declarações
    Car *carros;
    carros = (Car *) malloc(sizeof(carros) * MAX);
    
    setCars(carros);
    getDieselCarOwnersByYear(carros, 1980);
    getCarPlates(carros);
    getCarModelAndColor(carros);
    setCarOwnerByChassis(carros);

    free(carros);
}