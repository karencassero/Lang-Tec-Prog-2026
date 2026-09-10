#include <stdio.h>
#include <stdlib.h>

int mult (int digito, int valor){
	return digito * valor;
}

int main(int argc, char *argv[]) {
	int numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, dv, dv2, soma, resto;
	
	scanf ("%d %d %d . %d %d %d . %d %d %d - %d %d", &numero1, &numero2, &numero3, &numero4, &numero5, &numero6, &numero7, &numero8, &numero9, &dv, &dv2);
	
	printf ("confirme o cpf: %d %d %d . %d %d %d . %d %d %d - %d %d", &numero1, &numero2, &numero3, &numero4, &numero5, &numero6, &numero7, &numero8, &numero9, &dv, &dv2");
	
	soma = mult (numero1, 10)+mult (numero2, 9)+

	return 0;
}
