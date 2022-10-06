#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define S 3

int main(){
    srand(time(0));
    int M1[S][S];
    int M2[S][S];
    int somma[S][S];
    int molt[S][S];
    int i, j;
    int x,z;
    int tmp = 0;
    //inizializza matrici con valori random
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            M1[i][j] = rand() %5 +1;
            M2[i][j] = rand() %5 +1;
            somma[i][j] = 0;
        }
    }

    //Somma
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){

            somma[i][j] = M2[i][j] + M1[i][j] ;

        }
    }
    //Moltiplicazione
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            tmp = 0;
            for(z = 0; z < S; z++){
                tmp = tmp + (M1[i][z] * M2[z][j]);
            }
            molt[i][j] = tmp;
        }
    }



    // stampa due matrici

    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%d ", M1[i][j]);
            if(j == S -1){
                printf("\n");
            }
        }
    }
    printf("\n");

    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%d ", M2[i][j]);
            if(j == S -1){
                printf("\n");
            }
        }
    }

    printf("\n");
    printf("Somma: \n");
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%d ", somma[i][j]);
            if(j == S -1){
                printf("\n");
            }
        }
    }
    printf("\n");
    printf("Prodotto: \n");
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%d ", molt[i][j]);
            if(j == S -1){
                printf("\n");
            }
        }
    }
    return 0;
}
