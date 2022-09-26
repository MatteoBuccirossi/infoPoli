#include <stdio.h>

int main(){
	int courses;
	printf("Numero di corsi: \n");
	scanf("%d", &courses);
	int i;
	float num, den;
	for(i = 0; i < courses; i++){
		float cfu, grade;
		printf("Corso %d: \nCfu: \n",i +1 );
		scanf("%f", &cfu);
		printf("Voto: \n");
		scanf("%f", &grade);
		
		num = num + (cfu* grade);
		den = den + cfu;
	}
	
	printf("La tua media pesata: %f", num / den);
	return 0;
}
