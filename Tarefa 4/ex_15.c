#include <stdio.h>
#define LOCATIONS 7

char GetLetter(int num){
    switch (num){
        case 0:
            return 'A';
        case 1:
            return 'B';
        case 2:
            return 'C';
        case 3:
            return 'D';
        case 4:
            return 'E';
        case 5:
            return 'F';
        case 6:
            return 'G';
        case 7:
            return 'H';
        case 8:
            return 'I';
        case 9:
            return 'J';
        case 10:
            return 'K';
        case 11:
            return 'L';
        case 12:
            return 'M';
        case 13:
            return 'N';
        case 14:
            return 'O';
        case 15:
            return 'P';
        case 16:
            return 'Q';
        case 17:
            return 'R';
        case 18:
            return 'S';
        case 19:
            return 'T';
        case 20:
            return 'U';
        case 21:
            return 'V';
        case 22:
            return 'W';
        case 23:
            return 'X';
        case 24:
            return 'Y';
        case 25:
            return 'Z';

    }
}

int GetNumber(char letter){
    switch (letter){
        case 'A':
            return  0;
        case 'B':
            return  1;
        case 'C':
            return  2;
        case 'D':
            return  3;
        case 'E':
            return  4;
        case 'F':
            return  5;
        case 'G':
            return  6;
        case 'H':
            return  7;
        case 'I':
            return  8;
        case 'J':
            return  9;
        case 'K':
            return 10;
        case 'L':
            return 11;
        case 'M':
            return 12;
        case 'N':
            return 13;
        case 'O':
            return 14;
        case 'P':
            return 15;
        case 'Q':
            return 16;
        case 'R':
            return 17;
        case 'S':
            return 18;
        case 'T':
            return 19;
        case 'U':
            return 20;
        case 'V':
            return 21;
        case 'W':
            return 22;
        case 'X':
            return 23;
        case 'Y':
            return 24;
        case 'Z':
            return 25;  
    }
}

int main(){
    //printf("%c",GetLetter(0));
    int timeBetween[LOCATIONS][LOCATIONS];
    int currenttime;
    
    // para armazenar na matriz
    int location1, location2;
    
    // Usuário digita
    char text_location1[1], text_location2[1];

    for ( location1 = 0; location1 < LOCATIONS; location1++ ) {
        for ( location2 = location1; location2 < LOCATIONS; location2++) {
            if( location1 != location2 ){
                printf("\nSend the time between %c and  %c ",
                    GetLetter(location1), 
                    GetLetter(location2)
                );

                scanf("%i", &currenttime);

                timeBetween[location1][location2] = currenttime;
                timeBetween[location2][location1] = currenttime;

            }else{
                timeBetween[location1][location2] = 0;
            }
        }
    }

    printf("\n");
    printf("\n");

    for ( location1 = 0; location1 < LOCATIONS; location1++ ) {
        for ( location2 = 0; location2 < LOCATIONS; location2++) {
            printf("[%i] ", timeBetween[location1][location2]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    do{
        printf("\n--------------------------------------------------------------");
        printf("\nGet time between 2 cities ");
        printf("\n--------------------------------------------------------------");

        printf("\nSend the first city: ");
        scanf(" %c", &text_location1);

        printf("\nSend the second city: ");
        scanf("\n%c", &text_location2);

        location1 = GetNumber(text_location1[0]);
        location2 = GetNumber(text_location2[0]);

        printf("\n-------");
        printf("\n------ The time between is %i", 
            timeBetween[location1][location2]
        );
        printf("\n-------");

        printf("\n");
        printf("\nSend equals locations to exit. ");
        
    }while( text_location1[0] != text_location2[0] );
    
    return 0;
}
