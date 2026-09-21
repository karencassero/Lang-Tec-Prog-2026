#include <stdio.h>
#include <stdlib.h>
#define COR_AZUL     "\x1b[34m"
#define COR_VERDE    "\x1b[32m"
#define COR_VERMELHA "\x1b[31m"
#define COR_RESET    "\x1b[0m"

int main(int argc, char *argv[]) {
	//Ex1
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, s1, s2, s3, s4, s5, s6, s7, s8, s9; 
	int ver1, ver2, soma1, res1, ss1, ss2, ss3, ss4, ss5, ss6, ss7, ss8, ss9, ss10, soma2, res2;
	
	printf("Digite o seu CPF com espaços entre os numeros: ");
	scanf ("%d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	printf ("%d %d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11);
	
	s1=n1*10;
	s2=n2*9;
	s3=n3*8;
	s4=n4*7;
	s5=n5*6;
	s6=n6*5;
	s7=n7*4;
	s8=n8*3;
	s9=n9*2;
	
	soma1=s1+s2+s3+s4+s5+s6+s7+s8+s9;
	soma1 *=10;
	res1=soma1%11;
	
	ss1=n1*11;
	ss2=n2*10;
	ss3=n3*9;
	ss4=n4*8;
	ss5=n5*7;
	ss6=n6*6;
	ss7=n7*5;
	ss8=n8*4;
	ss9=n9*3;
	ss10=res1*2;
	
	soma2=ss1+ss2+ss3+ss4+ss5+ss6+ss7+ss8+ss9+ss10;
	soma2 *=10;
	res2=soma2%11;
	
	if (res1==n10 && res2==n11)
	  printf ("CPF Valido!");
	else 
	  printf ("CPF Invalido!");
    
    //Ex2
	{
	float valor, resultado;
    char grandeza;
 
    printf("Digite o valor da temperatura: ");
    scanf("%f", &valor); // -> exemplo: 100.0
 
    printf("Essa temperatura esta em Celsius ou Fahrenheit? (digite C ou F): ");
    scanf(" %c", &grandeza); // -> exemplo: C
    // o espaco antes do %c evita que o \n deixado pelo scanf anterior
    // seja lido no lugar do caractere digitado
 
    if (grandeza == 'C' || grandeza == 'c') {
        // Celsius -> Fahrenheit
        resultado = (valor * 9.0 / 5.0) + 32; // -> 100 * 1.8 + 32 = 212.0
        printf("\n%.2f Celsius equivalem a %.2f Fahrenheit\n", valor, resultado);
    }
    else if (grandeza == 'F' || grandeza == 'f') {
        // Fahrenheit -> Celsius
        resultado = (valor - 32) * 5.0 / 9.0; // -> (100-32) * 5/9 = 37.78
        printf("\n%.2f Fahrenheit equivalem a %.2f Celsius\n", valor, resultado);
    }
    else {
        printf("\nGrandeza invalida! Digite apenas C ou F.\n");
    }
	}
    
    //Ex3
    {
    	char nome[50]; 
    double n1, n2, n3, media;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nome); 

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("Aluno: %s\n", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7.0 && media <= 10.0) {
        printf("Situacao: " COR_AZUL "Aprovado" COR_RESET "\n");
    } 
    else if (media >= 4.0 && media < 7.0) {
        double falta_para_10 = 10.0 - media;
        printf("Situacao: " COR_VERDE "Exame" COR_RESET "\n");
        printf(COR_VERDE "Falta %.2f para atingir a nota 10.\n" COR_RESET, falta_para_10);
    } 
    else {
        printf("Situacao: " COR_VERMELHA "Reprovado" COR_RESET "\n");
    }
	}
	return 0;
}
