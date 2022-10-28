#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RESET "\x1B[0m"
#define MAG   "\x1B[32m"
#define L 100
#define H 100

int main(){
    srand(time(NULL));
    int m[H][L];
    int i, j, k , kOut = 1;
    int z, x;
    int impossibile = 1;
    int found = 1;
    int found2 = 0;
    int indA = 0, indB = 0;


    for(i = 0; i < H; i++){
        for(j = 0; j < L; j++){
            m[i][j] = rand() %3 +1;
        }
    }


    for( k = 2;(k <= H && k <= L) && impossibile == 1; k++){
        found2 = 0;
        for(i = 0; i < H && found2 == 0; i++){
            for(j = 0; j < L && found2 == 0; j++){
                //printf("i: %d, j: %d, i+k: %d, j +k: %d \n", i,j,i+k,j+k);
               if((i + k <= H )&& (j +k <= L)){
                    found = 1;
                    for(x = 0; x < k ; x++){
                        for(z = 0; z <k ; z++){
                            if(m[i][j] != m[i +x][j +z]){
                                //printf("i: %d, j: %d, x: %d, z: %d \n", i,j,x,z);
                                found = 0;
                            }
                            if(found == 1 && x == k-1 && z == k-1){
                                //printf("here  at the end\n");
                                found2 = 1;
                                kOut = k;
                                indA = i;
                                indB = j;
                            }
                        }
                    }
                }
            }
        }
        if(!found2){
            impossibile = 1;
        }
    }

    printf("Biggest k: %d", kOut);
    printf("\n");
    for(i = 0; i < H; i++){
        for(j = 0; j < L; j++){
            if((i < indA + kOut)&& (i >= indA) && (j < indB + kOut)&&(j >= indB) ){
                printf(MAG "%2d" RESET, m[i][j]);
            }else{
                printf("%2d", m[i][j]);
            }
            if(j== L-1){
                printf("\n");
            }
        }
    }


    return 0;
}

