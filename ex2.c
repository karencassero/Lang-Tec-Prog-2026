#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,c;
	float resultado;
	
	a = 10;
	b = 20;
	c = 30;
	
	resultado = (a+b+c)/3;
	
	printf("resultado %f", resultado);

	//Exercício 8

	int x1, x2, y1, y2, p1, p2;
	float dis;
	
	printf ("Insira o valor do par ordenado na forma (x1, x2): ");
	scanf ("%d", &x1);
	scanf ("%d", &x2);
	
	printf ("\n\nLeitura: (%d, %d)", x1, x2);
	
	return 0;
	
}
