#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
{
	int a, b, c;
	int resultado;
	
	a = 10;
	b = 1;
	c = 100;

	resultado = a == b;
	
	printf ("%d", resultado);
}
//Ex2
{
	int a, b, c;
	int resultado;
	
	printf ("Insira os valores de A, B, C: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (a>b){
		resultado = a;
	}
	else{
		resultado = b;
	}
	
		if (resultado>c){
		resultado = resultado;
	}
	else{
		resultado = c;
	}
	
	printf ("%d eh o maior", resultado);
}
	return 0;
}
