#include <stdio.h>
#define N 4
void printGrid(int m[][N]);
void muovi(int m[][N], int move);
void stampaMosse(int m[][N]);
int validaMossa(int max, int move);
int risolto(int m[][N]);

typedef struct{
    int x;
    int y;
}mossa;

int main(){
    int M[N][N];
    int i, j;
    int c;
    for( i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            M[i][j] = i*N + j ;
        }
    }
    M[0][0] = 15;
    M[3][3] = 0;
    while(risolto(M) == 0){
        printGrid(M);
        stampaMosse(M);
        printf("\nyour move:");
        scanf("%d", &c);
        muovi(M, c);
    }

    printGrid(M);
    stampaMosse(M);
    return 0;
}

int risolto(int m[][N]){
    int i, j;
    int temp = 0;
    int resolved = 0;
    for( i = 0; i < N ; i++){
        for(j = 0; j< N ; j++){
            if(m[i][j]< temp && m[i][j] != 0){
                return 0;
            }else if (m[i][j] > temp){
                temp = m[i][j];
            }

        }
    }
    return 1;
}

void stampaMosse(int m[][N]){
    int i, j;
    int k , z;
    int moves = 0;
    int found = 0;
    for( i = 0; i < N && found == 0; i++){
        for(j = 0; j< N && found == 0; j++){
            if(m[i][j] == 0){
                found = 1;
                k = i;
                z = j;
            }
        }
    }
    printf("moves: ");
    for(i = 0; i < 1; i++){
        if(k-1 >= 0) {
            printf("%d(%d), ", m[k-1][z], moves);
            moves++;
        }
        if(k+1< N){
           printf("%d(%d), ", m[k+1][z],  moves);
           moves++;
        }
        if(z+1< N) {
            printf("%d(%d), ", m[k][z+1],  moves);
            moves++;
        }
        if(z-1 >= 0) {
            printf("%d(%d), ", m[k][z-1],  moves);
            moves++;
        }
    }


}

int validaMossa(int max, int move){
    if(move > max -1 ) return 0;
    return 1;
}

void muovi(int m[][N], int move){
    int i, j;
    int k , z;
    int moves = 0;
    mossa Mosse[4];
    mossa newMove;
    int found = 0;
    for( i = 0; i < N && found == 0; i++){
        for(j = 0; j< N && found == 0; j++){
            if(m[i][j] == 0){
                found = 1;
                k = i;
                z = j;
            }
        }
    }
    for(i = 0; i < 1; i++){
        if(k-1 >= 0) {
            newMove.x = k-1;
            newMove.y = z;
            Mosse[moves] = newMove;
            moves++;
        }
        if(k+1< N){
            newMove.x = k+1;
            newMove.y = z;
            Mosse[moves] = newMove;
            moves++;
        }
        if(z+1< N) {
            newMove.x = k;
            newMove.y = z+1;
            Mosse[moves] = newMove;
            moves++;
        }
        if(z-1 >= 0) {
            newMove.x = k;
            newMove.y = z-1;
            Mosse[moves] = newMove;
            moves++;
        }
    }

    if(validaMossa(moves, move) == 1){
        m[k][z] = m[Mosse[move].x][Mosse[move].y];
        m[Mosse[move].x][Mosse[move].y] = 0;
    }
}

void printGrid(int m[][N]){
    int i,j;
    for(i = 0; i <N; i++){
        if(i!= N){
            for(j = 0; j < N; j++){
                if(j == 0){
                    printf("");
                }
                printf("-----");
                if(j == N -1){
                    printf("\n");
                }
            }
        }
        for(j = 0; j <N; j++){
            m[i][j] == 0 ? printf("   "): printf("%3d", m[i][j]);

            if(j == N -1){
                printf(" |");
                printf("\n");

            }else{
                printf(" |");
            }
        }
    }
             for(j = 0; j < N; j++){
                if(j == 0){
                    printf("");
                }
                printf("-----");
                if(j == N -1){
                    printf("\n");
                }
            }
}

