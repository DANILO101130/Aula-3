#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i;
	float nota, soma;
	
	for (i = 1; i <= 5; i++) {
		printf("Digite a %i� nota: ", i);
		scanf("%f",&nota);
		
		soma = soma + nota;
	}
	
	printf("\n=== Exibindo resultado === \n");
	printf("soma: %.1f \n", soma);
	
	return 0;
}


