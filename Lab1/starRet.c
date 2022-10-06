#include <stdio.h>
void varianteLati(){
	int n;
	printf("Inserire un numero (1-10): \n");
	scanf("%d", &n );
	int i;
	for(i = 0; i < n; i++){
		int w;
		for(w = 0; w < n; w++){
			if(i == 0 || i == n -1){
				printf("*");
				if(w == n-1){
					printf("\n");
				}
			}else{
				if(w == 0){
				printf("*");
			}else if(w == n-1){
				printf("*\n");
			}else{
				printf(" ");
			}
			}
		}
	}
}

int main(){
	int n;
	printf("Inserire un numero (1-10): \n");
	scanf("%d", &n );
	int i;
	for(i = 0; i < n; i++){
		int w;
		for(w = 0; w < n; w++){
			printf("*");
			if(w == n-1){
				printf("\n");
			} 
		}
	}
	
	varianteLati();
	return 0;
}


