// Aluno: Jeferson S. M. de Souza
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//accuracy
#define TERMS 15
#define M_PI acos(-1.0)

int ** createMatrix(int **matrix, int rows, int columns) {
    int row, column;

    matrix = (int **) malloc(sizeof(matrix) * rows);
    for (row = 0; row < rows; row++) {
        matrix[row] = (int *) malloc(sizeof(matrix[row]) * columns);
    }
    return matrix;
}

void freeMatrix(int **matrix, int rows){
    int row, column;

    for (row = 0; row < rows; row++) {
        free(matrix[row]);
    }
    free(matrix);
}

float degreeToRadian(int degree){
    return ((float) degree * M_PI)/ 180;
}

int calcualateFactorial(int number){
    int factorial = 1;
    int count;
    for(count = number; count >= 1; count--){
        factorial *= count; 
    }
    return factorial;
}

float calculateSen(float radian, int accuracy, float pi){
    //controll
    int term;
    int increment = 2;
    int initial = 3;
    int final = initial + (accuracy * increment);
    int controller = 1;
    //calc
    float termValue, sen = radian;

    for(term = initial; term < final; term+=increment){
        termValue = pow(radian, term)/calcualateFactorial(term);
        
        if(controller % 2 == 0){
            printf("\n + %d",term);
        }else{
            printf("\n - %d",term);
        }
        controller++;
    }
}

void main(){
    int *x;
    float xRadian;

    printf("\nCalcular Seno:");
    printf("\nDigite o angulo em graus");
    // scanf("%d", &x);
    // xRad = degreeToRadian(x);

    // printf("%d",calcualateFactorial(x));
    calculateSen(1.0, TERMS, M_PI);

} // <3