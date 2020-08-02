// Aluno: Jeferson S. M. de Souza
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//accuracy
#define TERMS 16
//pi
#define M_PI acos(-1.0)
//cicle degree
#define N 360

typedef struct Sine {
    float degree;
    float radian;
    float sine;
}Sine;

float degreeToRadian(int degree){
    return (((float) degree * M_PI)/ (float) 180);
}

int calcualateFactorial(int number){
    int factorial = 1;
    int count;
    for(count = number; count >= 1; count--){
        factorial *= count; 
    }
    return factorial;
}

float calculateSine(int degree){
    //controll
    int accuracy = TERMS;
    int term;
    int increment = 2;
    int initial = 3;
    int final = initial + (accuracy * increment);
    int controller = 1;

    //calc
    float radian = degreeToRadian(degree);
    float termValue, sine = radian;

    for(term = initial; term < final; term += increment){
        termValue = pow(radian, term)/ (float) calcualateFactorial(term);
        if(controller % 2 == 0){
            sine += termValue;
        }else{
            sine -= termValue;
        }
        controller++;
    }
    return sine;
}

Sine * newSine(){
    Sine *array;
    array = (Sine *) malloc(sizeof(array) * N);
    int index;
    for (index = 0; index < N; index++) {
        array[index].degree = index;
        array[index].radian = degreeToRadian(index);
        array[index].sine = calculateSine(index);
    }
    return array;
}

void printSineArray(Sine *array, int max){
    int index;
    for (index = 0; index < max; index++) {
        printf("\nsin (%i) : %f", index, array[index].sine);
    }
}
void printSineArrayBiggerThan(Sine *array, int max, float condition){
    int index;
    for (index = 0; index < max; index++) {
        if( array[index].sine > condition){
            printf("\nsin (%i) : %f", index, array[index].sine);
        }
    }
}

void degreeInput(int degree){
    printf("\nCalcular Seno:");
    printf("\nDigite o angulo em graus");
    scanf("%d", &degree);
}
void main(){
    Sine *sine;
    sine = newSine();
    int degree;

    degreeInput(degree);
    printf("\n%f", sine[degree].sine);
    
    printSineArrayBiggerThan(sine, N, 0.5);
    printSineArray(sine, N);    
    free(sine);
} // <3