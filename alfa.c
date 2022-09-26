#include <stdio.h>
int main() {
	char a, b, first, last;
	printf("Inserisci due  caratteri : \n");
	scanf(" %c", &a);
	scanf(" %c", &b);
	if (a < b){
		first = a;
		last = b;
	}
	else {
		last = a;
		first = b;
	}

	printf ("viene prima %c \n", first);
	printf ("viene dopo %c \n", last);	
	
	int i = 1;
	while( first + i < last){
		printf("%c \n", first+i);
		i++;
	}
	return 0;
}

