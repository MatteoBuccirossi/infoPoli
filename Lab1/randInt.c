#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(0));
	int r = rand();
	int guess;
	printf("Indovina il numero:");
	scanf("%d", &guess);
	
	while(guess != r){
		if(r > guess){
			printf("+ grande, riprova:");
			scanf("%d", &guess);
		}else{
			printf("+ piccolo, riprova:");
			scanf("%d", &guess);
		}
	}
	
	printf("Giusto !");
	return 0;
	
}
