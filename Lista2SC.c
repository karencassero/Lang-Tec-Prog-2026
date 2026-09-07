#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

void ex1(){
	// Exercício 1
    int idade, anoAtual, anoNascimento;

    printf("Digite a idade: ");
    scanf("%d", &idade); // -> 20
 
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual); // -> 2026
 
    anoNascimento = anoAtual - idade; // -> 2026 - 20 = 2006
 
    printf("Ano de nascimento: %d\n", anoNascimento); // -> 2006
}

void ex2(){
	// Exercício 2
    double k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &k); // -> 72
 
    m = k / 3.6; // -> 72 / 3.6 = 20
 
    printf("Velocidade em m/s: %.2f\n", m);
}

void ex3(){
	// Exercício 3
    double reais, cotacao, dolares;

    printf("Digite o valor em reais: ");
    scanf("%lf", &reais); // -> 500
 
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacao); // -> 5
 
    dolares = reais / cotacao; // -> 500/5 = 100
 
    printf("Valor em dolares: %.2f\n", dolares);
}	

void ex4(){
	// Exercício 4
    double c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &c); // -> 100
 
    f = c * (9.0 / 5.0) + 32.0; // -> 100 * 1.8 + 32 = 212
 
    printf("Temperatura em Fahrenheit: %.2f\n", f);
}

void ex5(){
	// Exercício 5
    double g, r;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &g); // -> exemplo: 180.0
 
    r = g * pi / 180; // -> 180 * 3.141592 / 180 = 3.141592
 
    printf("Ângulo em radianos: %.4f\n", r);
}

void ex6(){
	// Exercício 6
    int n, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n); // -> 10
 
    antecessor = n - 1; // -> 9
    sucessor = n + 1;   // -> 11
 
    printf("Antecessor: %d  Sucessor: %d\n", antecessor, sucessor);
}

void ex7(){
	// Exercício 7
    double total = 780000.00;
    double primeiro, segundo, terceiro;
 
    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo);
 
    printf("Primeiro ganhador: R$ %.2f\n", primeiro);
    printf("Segundo ganhador: R$ %.2f\n", segundo);
    printf("Terceiro ganhador: R$ %.2f\n", terceiro);
}

void ex8(){
	// Exercício 8
    int total, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total);
 
    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;
 
    printf("%d:%d:%d\n", horas, minutos, segundos);
}

void ex9(){
	// Exercício 9
    double tempo, velocidade, distancia, litros;
    const double consumo = 12.0; // km/L

    printf("Digite o tempo em horas: "); // -> 2
    scanf("%lf", &tempo);
 
    printf("Digite a velocidade media em km/h: "); // -> 60
    scanf("%lf", &velocidade);
 
    distancia = tempo*velocidade; // -> 2 * 60 = 120 km
    litros = distancia/consumo; // -> 120/12
 
    printf("Litros gastos: %.3f\n", litros);
}
	
void ex10(){
	// Exercício 10
	int a, b, c, maior_temp, maior;
	printf ("Insira os valores a serem comparados: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2;
	maior = (maior_temp+c+abs(maior_temp-c))/2;
	
	printf ("O maior entre [%d][%d][%d] = %d", a, b, c, maior);
}
int main(int argc, char *argv[]) {
	int resposta;
	printf ("Usuario, qual exercicio quer resolver? |1|2|3|4|5|6|7|8|9|10|\n");
	scanf("%d", &resposta);
	
	switch (resposta){
	case 1:
		ex1();
	break;
	
	case 2:
		ex2();
	break;
		
	case 3:
		ex3();
	break;
	
	case 4:
		ex4();
	break;
	
	case 5:
		ex5();
	break;
	
	case 6:
		ex6();
	break;
	
	case 7:
		ex7();
	break;
	
	case 8:
		ex8();
	break;
	
	case 9:
		ex9();
	break;
	
	case 10:
		ex10();
	break;		
	}
	return 0;
}
