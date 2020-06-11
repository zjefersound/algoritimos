#include <stdio.h>
#define LENGTH 5

//functions 

int main(){
    int matrix[LENGTH][LENGTH] = {0}, position;
    int row, column;

    //sum: row, column
    int selectedRow = 4, selectedColumn = 2;
    selectedRow--;
    selectedColumn--;
    int sumSelectedRow = 0, sumSelectedColumn = 0;

    //sum: diagonals
    int sumMainDiagonal = 0, sumSecondaryDiagonal = 0;

    //sum amount
    int amount = 0;

    //inputs
    for ( row = 0; row < LENGTH; row++ ) {
        for ( column = 0; column < LENGTH; column++ ) {
            printf("Send a integer value for field [%i,%i]", row, column);
            scanf("%i", &matrix[row][column]);
            printf("\n");
        }
    }

    //soma linha selecionada 4
    for(column = 0; column < LENGTH; column++){
        sumSelectedRow += matrix[selectedRow][column];
    }

    //soma coluna selecionada 2
    for(row = 0; row < LENGTH; row++){
        sumSelectedColumn += matrix[row][selectedColumn];
    }
    
    //soma diagonal principal jeito burro
    for(row = 0; row < LENGTH; row++){
        for(column = 0; column < LENGTH; column++){
            printf("[%i,%i] = %i ", row, column, matrix[row][column]);
            if ( row == column ) {
                sumMainDiagonal += matrix[row][column];
            }
        }
        printf("\n");
    }
    printf("\n Sum: elements on main diagonal = %i ", sumMainDiagonal);
    
    //soma diagonal principal 
    for(position = 0; position < LENGTH; position++){
        sumMainDiagonal += matrix[position][position];  
    }

    //soma diagonal secundária 
    for(position = 0; position < LENGTH; position++){
        sumSecondaryDiagonal += matrix[position][LENGTH - 1 - position];  
    }

    //soma total
    for(row = 0; row < LENGTH; row++){
        for(column = 0; column < LENGTH; column++){
            amount += matrix[row][column];  
        }
    }

    printf("\n Sum: elements on row [%i] = %i ", selectedRow + 1, sumSelectedRow);
    printf("\n Sum: elements on column [%i] = %i ", selectedColumn + 1, sumSelectedColumn);
    printf("\n");
    
    printf("\n Sum: elements on main diagonal = %i ", sumMainDiagonal);
    printf("\n Sum: elements on secondary diagonal = %i ", sumSecondaryDiagonal);
    printf("\n");

    printf("\n Sum: all elements = %i ", amount);


    return 0; 
}