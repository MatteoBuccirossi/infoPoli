#include <iostream>
#include <cstdlib>
#include <time.h>
#define N 4
using namespace std;



void printMat(int A[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << " " <<A[i][j] << " ";
            if(j == N-1){
                cout <<endl;
            }
        }
    }
}

void triangularMat(int A[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j< N; j++){
            A[i][j] = A[i][j] + A [j][i];
            A[j][i] = 0;
        }
    }
}

void initRandMat(int A[N][N]){
    srand(time(0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            A[i][j] = rand() % 10;
        }
    }
}
void initProgMat(int A[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            A[i][j] = (i * N) + j +1;
        }
    }
}

int main(){

    int M[N][N];
    initProgMat(M);
    printMat(M);
    cout << endl;
    triangularMat(M);
    printMat(M);

}
