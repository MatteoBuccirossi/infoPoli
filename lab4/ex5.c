#include <stdio.h>
#define N 6
int isLess(int m[][N], int k);

int main(){
    int M[N][N];
    int i, j;

    for(i = 0; i < N; i++){
        for(j= 0; j<N; j++){
           M[i][j] = (N-i)*N + j;
           printf("%d ",M[i][j]);
           if(j == N -1){
            printf("\n");
           }
        }
    }
    printf("\n%d", isLess(M, 12));

    return 0;
}

int isLess(int m[][N], int k){
    int i, j;
    int flag = 0;
    for(i = 0; i < N; i++){
        flag = 0;
        for(j = 0; j < N && flag == 0; j++){
            if(m[i][j] >= k){
                flag = 1;
            }else if( j == N -1){
                printf("Row: %d", i);
                return 1;
            }
        }
    }
    return 0;
}
