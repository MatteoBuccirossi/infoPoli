#include <stdio.h>
#define S 3
int main(){
    int M[S][S];
    int i, j;
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("El at pos (%d, %d): ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    //print matrice di partenza e sostituzione pari
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%d ", M[i][j]);
            if(j== S-1){
                printf("\n");
            }
            if(M[i][j]%2== 0){
                M[i][j] = M[i][j] / 2;
            }
        }
    }

    printf("\n");

    //print matrice finale
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%d ", M[i][j]);
            if(j== S-1){
                printf("\n");
            }
        }
    }


    return 0;
}
