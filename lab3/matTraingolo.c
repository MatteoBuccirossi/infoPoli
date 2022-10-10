#include <stdio.h>
#define S 10

int main(){
    int m[S][S];
    int i,j;
    int seed = 1;
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            m[i][j] = seed + (i*S) +j;
        }
    }

    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%4d", m[i][j]);
            if(j== S-1){
                printf("\n");
            }
        }
    }

    for(i = 0; i < S; i++){
        for(j = i+1; j < S; j++){
            m[i][j] = m[i][j] + m[j][i];
            m[j][i] = 0;
        }
    }
    printf("\n");
    for(i = 0; i < S; i++){
        for(j = 0; j < S; j++){
            printf("%4d", m[i][j]);
            if(j== S-1){
                printf("\n");
            }
        }
    }
    return 0;
}
