#include <stdio.h>
#include <stdlib.h>

void bubblesort(int param[], int size){
    int i, j;
    for(i = 0; i < size; i++){
        for(j= 0; j < size; j++){
            if(param[i] > param[j]){
                int temp = param[i];
                param[i] = param[j];
                param[j] = temp;
            }
        }
    }
}

void printar(int ar[], int dim){
    int i ;
    for(i = 0; i< dim; i++){
        printf("%d ", ar[i]);
    }
}

int main(){
    int v[5] = {2,5,3,2,6,};
    printar(v, 5);
    printf(" \n");
    bubblesort(v, 5);
    printar(v, 5);

}
