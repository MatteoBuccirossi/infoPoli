#include <stdio.h>
#include <time.h>

void delay( int seconds){
	int milli = 1000 * seconds;
	clock_t startclock = clock();
	while( clock() < milli){
	}
	
} 

int main(){
	int x = 9;
	printf("beginning \n");
	while(x > 0){
		printf("%d \n", x);
		delay(1 * (x +1 ));
		x -= 1;
	}
	printf("done \n");
	return 0;
}
