#include <stdio.h>

//best solution

int fact(int n){
	int prod = 1;
	for(; n >= 2; n--){
		prod = prod*n;
	}
	printf("\n%d", prod);
}

//readable solution
int main (){
	int n, i; 
	scanf("%d", &n);
	int prod = 1;
	for(i = 0; i < n; i++){
		prod = prod * (n-i);
	}
	printf("\n%d", prod);
	fact(n);
	return 0;
}


