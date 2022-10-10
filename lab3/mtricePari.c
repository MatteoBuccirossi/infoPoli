#include <stdio.h>

#define S 20
#define L 30

int main(){
    int m[S][L];
    int i, j;
    2

    for(i = 0; i < S; i++){
        for(j = 0; j < L; j++){
            if((j+i)%2 == 0){
                printf("el at pos (%d, %d): ", i, j);
                scanf("%d", &m[i][j]);
            }else{
                m[i][j] = 0;
            }
        }
    }


    for(i = 0; i < S; i++){
        for(j = 0; j < L; j++){
            printf("%d ", m[i][j]);
            if(j == S -1){
                printf("\n");
            }
        }
    }
}
