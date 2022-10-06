#include <stdio.h>

#define SIZE 3


int main(){
    int M[SIZE][SIZE] = {1,2,3,
                         2,5,2,
                         3,2,8};

    int M2[SIZE][SIZE]= {1,2,3,
                         2,5,4,
                         3,2,8};
    int i,j;
    int sim = 1;
    for(i = 0; i < SIZE && sim == 1; i++){
            for(j = 0; j < i && sim == 1; j++){
                if(M[i][j] != M[j][i]){
                    sim = 0;
                }
            }
    }

    if(sim == 1)printf("simmetrica");
    else printf("non simmetrica ");

    /*
    int i,j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Inserire il numero pos(%d, %d): ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for(i = 0; i< SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d ", M[i][j]);
            if(j == SIZE -1) printf("\n");
        }
    }
*/
    return 0;
}
