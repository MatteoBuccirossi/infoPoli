#include <stido.h>
#include <string.h>
#include <math.h>

int toInt(char a){
	char* i = a;
	int x;
	sscanf(i, "%d", x);
	return x;
}

int decToBinSt(int num){
	
	double x = num;
	while(x<= 1.0){
		double product = floor(x / 2);
		double rest = x%2;
		
	}
}

int main(){
	
}
