#include <stdio.h>
#define LENGTH 5

//EX 1
/*
int main(){
    int v[LENGTH];
    int i;
    int sum = 0;
    for(i = 0; i < LENGTH; i++){
        scanf("%d", &v[i]);
        sum = sum +v[i];
    }
    printf("%d", sum);
    return 0;
}*/

//EX 2
/*

int main(){
    int v[LENGTH], i;

    for(i = 0;i < LENGTH; i++){
        scanf("%d", &v[LENGTH -i -1]);
    }
    for(i = 0; i< LENGTH;i++){
        printf("%d ", v[i]);
    }
    return 0;
}

*/


//EX 3
int main(){
    int v[LENGTH], i, w;

    for(i = 0;i < LENGTH; i++ ){
        scanf("%d", &v[i]);
    }
    for(i = 0; i < LENGTH; i++ ){
        for(w = i+1; w < LENGTH; w++ ){
            if( v[i] == v[w]){
                printf("0");
                return 0;
            }
        }
    }
    printf("1");
    return 0;
}

