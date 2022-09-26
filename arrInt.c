#include <stdio.h>
int main (){
	
	int array[10];
	printf("Riempi una lista di 10 numeri: \n");
	
	int i;
	for(i = 0; i < 10; i++){
		scanf(" %d", &array[i]);
	}
	int x;
	printf("Ora inserisci un indice (0-9): \n");
	scanf(" %d", &x);
	
	int sum = 0;
	int prod = 1;
	int w;
	for(w = 0; w < x; w++){
		sum = sum + array[w];
		//printf("%d \n", array[w]);
	}
	int z ;
	for(z = x + 1;  z< 10; z++){
		prod = prod * array[z];
	}
	int prodFinal = x == 9? 0: prod;
	printf("Somma : %d, Prodotto: %d", sum, prodFinal);
	
	return 0;
}
