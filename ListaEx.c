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

//Execício 3

	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, bit_1;
	printf ("Insira um valor a ser convertido: ");
	scanf ("%d", &n);// -> 41
	
	bit_64 = n%2;// -> 1
	res = n/2;// -> 20
	
	bit_32 = res%2;// -> 0
	res = res/2;// -> 10
	
	bit_16 = res%2;// -> 0
	res = res/2;
	
	bit_8 = res%2;// -> 1
	res = res/2;
	
	bit_4 = res%2;// -> 0
	res = res/2;
	
	bit_2 = res%2;// -> 0
	res = res/2;
	
	printf ("O número %d em binário = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);

	//Exercício 8

	int x1, x2, y1, y2, p1, p2;
	float dis;
	
	printf ("Insira o valor do par ordenado na forma (x1, x2): ");
	scanf ("%d", &x1);
	scanf ("%d", &x2);
	
	printf ("\n\nLeitura: (%d, %d)", x1, x2);
	
	return 0;
}
