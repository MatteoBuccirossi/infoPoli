#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define H 20
#define L 20
#define RESET "\x1B[0m"
#define GR   "\x1B[32m"

int main(){
    srand(time(NULL));
    char m[H][L];
    int i, j,z,x;
    int om = 'z';
    int a = 'a';
    char mainChar = '\0';
    int count = 0;
    for(i = 0; i < H; i++){
        for(j = 0; j < L; j++){
           m[i][j] = (rand() % (om - a + 1)) +a;;
        }
    }

    for(i = 0; i < H; i++){
        for(j = 0; j < L; j++){
           int temp = 0;
           for(x = 0; x < H; x++){
             for(z = 0; z < L; z++){
                if(m[i][j] == m[x][z]){
                    temp++;
                }
             }
           }
           count = count > temp ? count : temp;
           mainChar = count > temp ? mainChar: m[i][j];
        }
    }

    printf("count: %d, char: %c\n", count, mainChar);
    for(i = 0; i < H; i++){
        for(j = 0; j < L; j++){
            if(m[i][j] == mainChar){
                printf(GR "%2c" RESET, m[i][j]);
            }else{
                printf("%2c", m[i][j]);
            }
            if(j== L-1){
                printf("\n");
            }
        }
    }
}
