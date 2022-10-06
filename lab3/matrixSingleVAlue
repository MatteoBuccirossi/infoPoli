#include <stdio.h>

#define MAX 3
int main(){
    int M[MAX][MAX];
    int i,j;
    int x,z;
    int repeats = 0;

    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            printf("el at pos (%d, %d): ", i, j);
            scanf("%d", &M[i][j]);
            repeats = 0;
            //check riga
            for(x = j -1; x >= 0 && repeats == 0; x--){

                if(M[i][x] == M[i][j]){
                    printf("valore %d  già inserito\n", M[i][j]);
                    repeats= 1;
                    j--;
                }
            }
            //check altre righe
            for(x = i -1; x >= 0 && repeats == 0; x--){
                for(z = MAX - 1; z >= 0 && repeats == 0; z--){
                    if(M[x][z] == M[i][j]){
                        printf("valore %d  già inserito\n", M[i][j]);
                        repeats= 1;
                        j--;
                    }
                }
            }


        }
    }

    //Matrix printing
    for(i = 0; i< MAX; i++){
        for(j = 0; j <MAX; j++){
            printf("%d ", M[i][j]);
            if(j == MAX - 1){
                //print newln
                printf("\n");
            }
        }
    }

    return 0;
}
