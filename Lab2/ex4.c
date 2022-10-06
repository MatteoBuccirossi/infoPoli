#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define S1 50
#define S2 5

int main(){
    srand(time(0));
    int v1[S1] = {1,2,3,4,5,6,7,8,8,11};
    int v2[S2] = {6,8,7,8,11};
    int i, j, x,sum1 = 0, sumTmp = 0;
    int found = 0;
    int matches = 1;
    int index = 0;

    for(i = 0; i < S1; i++){
        int r1 = rand() % 10;
        v1[i] = r1;
        if(i < S2){
            int r2 = rand() % 10;
            v2[i] = r2;
        }
    }

    for(i = 0; i <S2; i++){
        sum1 = sum1 + v2[i];
    }


    for(i = 0; i <= S1 - S2 && found == 0; i++){
        sumTmp = 0;
        for(j = 0; j < S2; j++){
            sumTmp = sumTmp + v1[i+j];
        }
        //printf("%d , %d \n", sum1, sumTmp);
        if(sumTmp == sum1){
            //printf("here \n");
            //possibile match
            for(j = 0; j < S2 && matches == 1; j++){
                int count = 0, mult = 0;
                for(x = 0; x < S2; x++){
                    if(v1[i+j] == v2[x]){
                        count++;
                    }
                }
                if(count != 0){
                    for(x = 0;x < S2; x++){
                        //printf("%d , %d, %d\n", v1[i+j], v1[i+x], j);
                        if(v1[i+j] == v1[i+x]){
                            mult++;
                        }
                    }
                    if(count != mult){
                        //printf("%d , %d \n", count, mult);
                        matches = 0;
                    }else if( j == S2 - 1){
                        found = 1;
                        index = i;
                    }

                }else{
                    matches = 0;
                }
            }
        }
    }

    for(i = 0; i <S1; i++){
        printf("%d ", v1[i]);
    }

    printf("\n");

    for(i = 0; i <S2; i++){
        printf("%d ", v2[i]);
    }

    printf("\n");

    printf("%d at : %d\n", found, index);

    return 0;
}
