#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define RESET "\x1B[0m"

int main(){
    srand(time(NULL));
    int m[N][N];
    int i, j;
    int count = 0, count2 = 0;
    int firstA = 0, firstB = 0, medianA = 0,medianB = 0, lastA = 0,  lastB = 0;

    //manual init
    /*for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("El at pos (%d, %d): ", i, j);
            scanf("%d", &m[i][j]);
        }
    }*/

    //random init
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            m[i][j] = rand() %10;
        }
    }
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(m[i][j] == 0){
                if(count == 0){
                    firstA = i;
                    firstB = j;
                }
                count++;
            }
        }
    }
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(m[i][j] == 0){
                count2++;
                if(count2 == count/2 +1){
                    medianA = i;
                    medianB = j;
                }
                if(count2 == count){
                    lastA = i;
                    lastB = j;
                }
            }
        }
    }

    printf("\ncount: %d, first zero: %d, %d , last zero: %d, %d , median zero: %d, %d \n\n", count, firstA, firstB, lastA, lastB, medianA, medianB);
    //First: Green
    //Last: Blue
    //Median: Yellow

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i == firstA && j == firstB && count != 0){
                printf(GRN "%2d" RESET ,m[i][j]);
            }else if(i == lastA && j == lastB && count != 0){
                printf(BLU "%2d" RESET ,m[i][j]);
            }else if(i == medianA && j == medianB && count != 0){
                printf(YEL "%2d" RESET ,m[i][j]);
            }else{
                printf( "%2d"  ,m[i][j]);
            }
            if(j ==  N -1){
                printf("\n");
            }
        }
    }


    return 0;
}
