#include <stdio.h>

int main(){
	int a,b;
	printf("Due numeri: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	int min = (a < b) ? a : b;
	int i;
	for (i = 1; i <= min; i++ ){
		if(a%i == 0 && b%i == 0){
			printf("%d \n", i);
		}
	}
	return 0;	
}
