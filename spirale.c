#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("inserire numero (1-9): ");
	scanf ("%d", &n);
	
	int odd = n*2 -1;
	int half =( odd / 2 )+1;
	
	int i;
	for(i =1; i <= odd; i++){
		int w;
		for(w = 1; w<=odd; w++){
			if(abs(half - i) >= abs(half -w)){
				printf("%d", abs(half- i) +1);
			}else{
				printf("%d", abs(half- w) +1);
			}
			
			//newline
			if(w == odd){
				printf("\n");
			}
		}
	}
}


