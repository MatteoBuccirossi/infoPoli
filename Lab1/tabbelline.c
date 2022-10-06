#include <stdio.h>

int main(){
	int a, b;
	printf("Dammi due numeri: \n");
	scanf(" %d", &a);
	scanf(" %d", &b);
	int bitTrue = (a < 0 || b <0) ? 0: 1;
	
	while(bitTrue == 0){
		printf("Uno dei due numeri era negativo. Reinserire i numeri. \n");
		scanf(" %d", &a);
		scanf(" %d", &b);	
		bitTrue = (a < 0 || b < 0) ? 0: 1;
	}
	printf ("Int1: %d, Int2: %d \nTabellina: ", a, b);
	int i;
	for(i = 1; i <= b; i++){
		printf("%d ", a*i);
	}

	return 0;
}
