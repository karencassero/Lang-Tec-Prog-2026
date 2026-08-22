#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	
//Exercício 1
{	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor");
	scanf("%d", &primeiro);
	printf("Digite o segundo valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);
}

//Exercício 2
{
    double valor, a;
    int expoente;
 
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    expoente = (int) floor(log10(valor)); // floor -> arredonda para baixo
 
    a = valor / pow(10, expoente);
 
    printf("%.4f x 10^%d\n", a, expoente);
}

//Execício 3
{
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
}

//Exercício 4

{
    double fixo, vendas, total;

    printf("Digite o salario fixo: ");
    scanf("%lf", &fixo); // -> 1000.00
 
    printf("Digite o valor total em vendas: ");
    scanf("%lf", &vendas); // -> 2000.00
 
    total = fixo + (vendas * 0.15); // -> 1000 + 300 = 1300.00
 
    printf("TOTAL = R$ %.2f\n", total);
}

//Exercício 5
{
	
    double v1, v2, v3, v4;
    double soma, media, produto;

    printf("Digite 4 valores: ");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);
 
    soma = v1 + v2 + v3 + v4;
    media = soma / 4;
    produto = v1 * v2 * v3 * v4;
 
    printf("Soma = %.2f\n", soma);
    printf("Media = %.2f\n", media);
    printf("Produtorio = %.2f\n", produto);
}

//Exercício 6
{

    int dias, anos, meses, restoDias;

    printf("Digite a idade em dias: ");
    scanf("%d", &dias); // -> exemplo: 750
 
    anos = dias / 365;          // -> 2
    restoDias = dias % 365;     // -> 20
 
    meses = restoDias / 30;     // -> 0
    restoDias = restoDias % 30; // -> 20
 
    printf("%d anos e %d meses e %d dias\n", anos, meses, restoDias);
    // -> 2 anos e 0 meses e 20 dias
}

//Exercício 7
{

    double r, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &r); // -> exemplo: 2.0
 
    volume = (4.0 / 3.0) * pi * r * r * r; // -> 33.510
 
    printf("Volume = %.3f\n", volume);
}

//Exercício 8
{
	int x1, x2, y1, y2, p1, p2;
	float dis;
	
	printf ("Insira o valor do par ordenado na forma (x1, y1): ");
	scanf ("%d", &x1);
	scanf ("%d", &y1);

	printf ("Insira o valor do par ordenado na forma (x2, y2): ");
	scanf ("%d", &x2);
	scanf ("%d", &y2);

	p1 = pow(x2-x1, 2);
	p2 = pow(y2-y1, 2);

	dist = sqrt(p1+p2);
	
	printf ("\nA distância entre P1 e P2 = %f, dis);
}
	
	return 0;
}
