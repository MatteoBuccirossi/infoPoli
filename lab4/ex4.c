#include <stdio.h>
#define N 8

int sommaMatVet(int m[][N], int a[N]);

int main(){
	int i,k;
	int sum = 0;
	int sumOut;
	int M[N][N]={1,4,6,8,9,3,2,6,
	              4,7,2,4,1,8,1,1,
				  5,7,3,9,1,2,0,3,
				  3,7,7,5,5,3,8,0,
				  2,1,5,5,7,3,5,7,
				  2,4,9,3,7,5,8,9,
				  3,5,7,8,9,5,7,8,
				  1,2,6,4,8,9,9,0};
	int v[]={1,1,1,1,1,1,1,1};

	printf("M\n");
	for(i=0;i<N;i++){for(k=0;k<N;k++){printf("%d ",M[i][k]);}printf("\n");}
	printf("v\n");
	for(i=0;i<N;i++){printf("%d ",v[i]);}
	printf("\n");

	/*SCRIVERE QUI LE CHIAMATE DI FUNZIONI E I COMANDI DI STAMPA*/
	sumOut = sommaMatVet(M, v);
	printf("%d", sumOut);
	return 0;
}


int sommaMatVet(int m[][N], int a[N]){
    int i , sum =0;
    //printf("%d \n", m[0][0]);
    for(i = 0; i< N; i++){
        //printf("%d , %d\n", a[i], m[0][0]);
        sum = sum + m[i][a[i]- 1];
    }
    return sum;
}
