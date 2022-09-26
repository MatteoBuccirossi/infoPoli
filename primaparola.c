#include <stdio.h>
#include <string.h>

int doppia(char s[]){
	int i = 0;
	for(i; i < sizeof(s)/2 -1; i++){
		if(s[i] != s[sizeof(s)/2 +i -1]){
			return 0;
		}
	}
	return 1;
}

int x(char s[]){
	int dop, lung = strlen(s);
	char tmp = s[lung -1];
	s[lung - 1] = '\0';
	dop = doppia(s);
	s[lung -1 ] = tmp;
	return dop;

}


int main(){
	printf(" %d", x("pap"));

	return 0;
}
