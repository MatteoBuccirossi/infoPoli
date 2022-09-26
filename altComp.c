#include <stdio.h>

int divisori(int n){
	int i;
	int sum = 0;
	for(i = 1; i <= n; i++){
		if(n % i ==0){
			sum ++;
		}
	}
	return sum;
}

int main(){
	int i = 0;
	int max = 0;
	int w = 1;
	while( i < 20){
		int div = divisori(w);
		if(div > max){
			printf("%d \n", w);
			max = div;
			i++;
		}
		w++;
	}
}
