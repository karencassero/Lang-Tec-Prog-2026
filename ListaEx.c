#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
//Exercício 1
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor");
	scanf("%d", &primeiro);
	printf("Digite o segundo valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);
	
//Exercício 2

	double valor;
	scanf("%lf", valor);
	printf("%e", valor);
	
	return 0;
}
