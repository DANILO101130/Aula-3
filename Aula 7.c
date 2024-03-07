#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, numero, par = 0, impar = 0;
	
	for (i = 1; i <= 5; i ++) {
		printf("Digite a %iª numero: ", i);
		scanf("%i", &numero);
		
		if(numero % 2 == 0) {
		  // Pares = Pares + 1;
		  par++;
	    } else {
	    	// impares = impares + 1;
	    	impar++;
		}
	}
	
	printf("\n=== Exibindo resultado === \n");
	printf("Quantidade pares: %i \n", par);
	printf("Quantidade ímapares: %i \n", impar);
	
	return 0;
	
}
		


