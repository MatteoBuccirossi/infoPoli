
#include <stdio.h>

#define SIZE 10

int main (){

    int hist[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5,17,1};
    int max =0;
    int i;
    for( i = 0; i < SIZE; i++){
        if(hist[i] > max){
            max = hist[i];
        }
    }


    while(max > 0 ){
        for(i = 0; i < SIZE; i++){
            if(hist[i] >= max){
                printf("  *");
            }else{
                printf("   ");
            }
        }
        printf(" \n");
        max--;
    }

    for(i = 0; i < SIZE; i++){
        printf("%3d", hist[i]);
    }


}
