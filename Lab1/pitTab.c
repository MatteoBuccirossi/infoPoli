#include <stdio.h>

int main(){
	int i;
	for(i = 1; i <= 10; i++){
		int w;
		for(w= 1; w <= 10; w++){
			int res = i * w;
			
			//per allineare i numeri 
			if(res >= 10){
				printf("%d ", res);
			}else{
				printf(" %d ", res);
			}
			
			if(w == 10){
				printf("\n");
			}
		}
	}
}
