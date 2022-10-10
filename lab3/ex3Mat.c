
#include <stdio.h>
#define N 4

int main(){
    int M[N][N]={1,12,0,7,4,3,5,5,6,4,3,8,7,5,2,4};
    int j, i, bigger = 0;
    int r,c;
    printf("Colonna: ");
    scanf("%d", &c);
    printf("Riga: ");
    scanf("%d", &r);
    for(j = 0; j< N && bigger == 0; j++){
        if(M[r][j] > M[r][c]){
            bigger = 1;
        }
    }
    if(bigger){
        printf("Non OK");
    }else{
        printf("Ok");
    }
    printf("\n");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%4d", M[i][j]);
            if(j== N-1){
                printf("\n");
            }
        }
    }

    return 0;
}
