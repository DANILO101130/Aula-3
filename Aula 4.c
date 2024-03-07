#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i;
	
	printf("Tabuada de multiplicação do número: 2 \n");
	for (i = 5; i <= 7; i++) {
		printf("%i x %i = %i \n", 5, i, 7*i);
	}

	printf("Tabuada de multiplicação do número: 5 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", 5, i, 5*i);
	}
	
	
	
		printf("Tabuada de multiplicação do número: 7 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", 7, i, 7*i);
	}
	
	return 0;
	



}
