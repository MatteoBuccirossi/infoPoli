#include <stdio.h>
#include <math.h>
#include <time.h>

#define SIZEA 10
#define SIZEB 5

void initArray(int arr[], int length){
    int i;
    for(i = 0; i< length; i++){
        arr[i] = rand() % (10)+1;
    }
}

void printArray(int arr[], int length){
    int i;
    for(i = 0; i< length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int exists(int arr[], int length, int el){
    int i;
    for(i = 0; i< length; i++){
        if(arr[i] == el){
            return 1;
        }
    }
    return 0;
}



int main(){
    srand(time(0));

    int arr1[SIZEA] ;
    int arr2[SIZEB] ;
    initArray(arr1, SIZEA);
    initArray(arr2, SIZEB);

    int i;
    for(i = 0; i < SIZEA; ){
        int w;
        int arrSup[5] = {0,0,0,0,0};
        for(w = 0; w< 5; w++){
            int x = i +w;
            if(exists(arr2, 5, arr1[x]) == 1 && exists(arrSup, 5, arr1[x]== 0)){
                arrSup[w] = arr1[x];
            }

        }
        if(exists(arrSup, 5, 0) == 0){
            printf("1: esiste \n");
            printArray(arr1, SIZEA);
            printArray(arr2, SIZEB);
            return  0;
        }
        i++;

    }
    printArray(arr1, SIZEA);

    printArray(arr2, SIZEB);
    return 0;

}


