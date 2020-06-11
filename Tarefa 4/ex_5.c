#include <stdio.h>
#define PEOPLE 5

int main(){
    int age[PEOPLE] = {0}, count;
    float tall[PEOPLE] = {0.};

    for (count = 0; count < PEOPLE; count++) {
        printf("Send the age for %i\n", count);
        scanf("%i",&age[count]);
        printf("Send the tall for %i\n", count);
        scanf("%f",&tall[count]);
    }

    for (count = PEOPLE - 1; count >= 0; count--) {
        printf("\n%i - age: %i tall: %f", count, age[count], tall[count]);
    }
    return 0; 
}
