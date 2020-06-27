#include <stdio.h>
#include <stdlib.h>

// maloc
// free
// realoc
void main() {
    int *x;
    x = (int *) malloc(sizeof(x) * 10);
    x[9] = 12;
    printf("%i",x[9]);
    x = realloc(x, 10 );
    x[12] = 23;
    printf("%i",x[12]);
    free(x);
    printf("\n%i",x[9]);
}