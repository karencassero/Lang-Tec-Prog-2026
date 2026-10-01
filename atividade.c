#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int prova, exercicio;
	
	printf ("Usuario, qual prova quer resolver? | 1-ADS | 2-ESOFT_MA | 3-ESOFT_MB |\n");
	scanf("%d", &prova);
	
	printf ("Usuario, qual exercicio quer resolver? |1|2|3|\n");
	scanf("%d", &exercicio);
	
 switch (prova) {
 

case 1:
    switch (exercicio) {
 
    	case 1: {
            int n1, n2, n3, n4, n5;
 
            printf("\nADS - Ex0\n");
            printf("Digite 5 numeros inteiros: ");
            scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
 
            if (abs(n1 - n2) == 1) 
			printf("%d e %d sao consecutivos\n", n1, n2);
            if (abs(n1 - n3) == 1) 
			printf("%d e %d sao consecutivos\n", n1, n3);
            if (abs(n1 - n4) == 1) 
			printf("%d e %d sao consecutivos\n", n1, n4);
            if (abs(n1 - n5) == 1) 
			printf("%d e %d sao consecutivos\n", n1, n5);
            if (abs(n2 - n3) == 1) 
			printf("%d e %d sao consecutivos\n", n2, n3);
            if (abs(n2 - n4) == 1) 
			printf("%d e %d sao consecutivos\n", n2, n4);
            if (abs(n2 - n5) == 1) 
			printf("%d e %d sao consecutivos\n", n2, n5);
            if (abs(n3 - n4) == 1) 
			printf("%d e %d sao consecutivos\n", n3, n4);
            if (abs(n3 - n5) == 1) 
			printf("%d e %d sao consecutivos\n", n3, n5);
            if (abs(n4 - n5) == 1) 
			printf("%d e %d sao consecutivos\n", n4, n5);
            break;
        }
 
        case 2: {
            float peso, altura, imc;
 
            printf("\nADS - Ex1\n");
            printf("Digite o peso (kg): ");
            scanf("%f", &peso);
 
            printf("Digite a altura (m): ");
            scanf("%f", &altura);
 
            imc = peso / (altura * altura);
            printf("IMC = %.2f\n", imc);
 
            if (imc < 18.5) {
                printf("Classificacao: Abaixo do peso\n");
            }
            else if (imc <= 24.9) {
                printf("Classificacao: Normal\n");
            }
            else if (imc <= 29.9) {
                printf("Classificacao: Acima do peso\n");
            }
            else {
                printf("Classificacao: Obeso\n");
            }
            break;
        }
 
        case 3: {
            int pinoA = 6, pinoB = 0, pinoC = 0;
 
            printf("\nADS - Ex2\n");
            printf("Estado inicial -> A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoA -= 1; pinoC += 1;
            printf("Mover disco 1: A->C | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoA -= 2; pinoB += 2;
            printf("Mover disco 2: A->B | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoC -= 1; pinoB += 1;
            printf("Mover disco 1: C->B | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoA -= 3; pinoC += 3;
            printf("Mover disco 3: A->C | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoB -= 1; pinoA += 1;
            printf("Mover disco 1: B->A | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoB -= 2; pinoC += 2;
            printf("Mover disco 2: B->C | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            pinoA -= 1; pinoC += 1;
            printf("Mover disco 1: A->C | A=%d B=%d C=%d\n", pinoA, pinoB, pinoC);
 
            printf("Estado final: A=%d B=%d C=%d (todos os discos em C)\n", pinoA, pinoB, pinoC);
            break;
        }
 
    }
        break;
 
case 2:
        switch (exercicio) {
 
        case 1: {
            int n1, n2, n3, n4;
 
            printf("\nESOFT_MA - Ex0\n");
            printf("Digite 4 numeros inteiros: ");
            scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
 
            if (n1 % 2 != 0) printf("%d e impar\n", n1);
            if (n2 % 2 != 0) printf("%d e impar\n", n2);
            if (n3 % 2 != 0) printf("%d e impar\n", n3);
            if (n4 % 2 != 0) printf("%d e impar\n", n4);

            if (n1 % 5 == 0) printf("%d e multiplo de 5\n", n1);
            if (n2 % 5 == 0) printf("%d e multiplo de 5\n", n2);
            if (n3 % 5 == 0) printf("%d e multiplo de 5\n", n3);
            if (n4 % 5 == 0) printf("%d e multiplo de 5\n", n4);
            break;
        }
 
        case 2: {
            int totalItens, capacidadeMochila, mochilasCheias;
 
            printf("\nESOFT_MA - Ex1\n");
            printf("Digite a quantidade total de itens: ");
            scanf("%d", &totalItens);
 
            printf("Digite a capacidade de cada mochila: ");
            scanf("%d", &capacidadeMochila);
 
            mochilasCheias = totalItens / capacidadeMochila;
            printf("Mochilas totalmente preenchidas: %d\n", mochilasCheias);
            break;
        }
 
        case 3: {
            float valor, valorEmMetros, resultado;
            int codOrigem, codDestino, origemValida = 1, destinoValido = 1;
 
            printf("\nESOFT_MA - Ex2\n");
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
 
            printf("Digite o codigo da unidade de origem: ");
            scanf("%d", &codOrigem);
 
            printf("Digite o codigo da unidade de destino: ");
            scanf("%d", &codDestino);
 
            switch (codOrigem) {
                case 1: valorEmMetros = valor; break;
                case 2: valorEmMetros = valor * 1000.0; break;
                case 3: valorEmMetros = valor / 100.0; break;
                case 4: valorEmMetros = valor / 1000.0; break;
                case 5: valorEmMetros = valor * 0.0254; break;
                case 6: valorEmMetros = valor * 0.3048; break;
                default:
                    origemValida = 0;
                    valorEmMetros = 0;
            }
 
            switch (codDestino) {
            	case 1: resultado = valorEmMetros; break;
                case 2: resultado = valorEmMetros / 1000.0; break;
                case 3: resultado = valorEmMetros * 100.0; break;
                case 4: resultado = valorEmMetros * 1000.0; break;
                case 5: resultado = valorEmMetros / 0.0254; break;
                case 6: resultado = valorEmMetros / 0.3048; break;
                default:
                    destinoValido = 0;
                    resultado = 0;
            }
 
            if (origemValida == 0 || destinoValido == 0) {
            printf("Erro: codigo de unidade nao existe no sistema.\n");
            } else {
            printf("Resultado da conversao: %.4f\n", resultado);
            }
            break;
            }
 
        }
        break;
     
case 3:
        switch (exercicio) {
 
            case 1: {
            int totalItens, capacidadeMochila, mochilasCheias, itensRestantes;
 
            printf("\nESOFT_MB - Ex0\n");
            printf("Digite a quantidade total de itens: ");
            scanf("%d", &totalItens);
 
            printf("Digite a capacidade de cada mochila: ");
            scanf("%d", &capacidadeMochila);
 
            mochilasCheias = totalItens / capacidadeMochila;
            itensRestantes = totalItens % capacidadeMochila;
 
            printf("Mochilas totalmente preenchidas: %d\n", mochilasCheias);
            printf("Itens que sobraram (nao preenchem uma mochila inteira): %d\n", itensRestantes);
            break;
        }
 
        	case 2: {
            int a, b, c;
 
            printf("\nESOFT_MB - Ex1\n");
            printf("Digite tres numeros inteiros (a, b, c): ");
            scanf("%d %d %d", &a, &b, &c);
 
            if (a == b || a == c || b == c) {
            printf("os numeros tem que ser distintos\n");
            }
            else {
            if (a < b && a < c) {
            if (b < c) { printf("%d %d %d\n", a, b, c); }
            else { 
			printf("%d %d %d\n", a, c, b); }
            }
            else if (b < a && b < c) {
            if (a < c) { printf("%d %d %d\n", b, a, c); }
            else { printf("%d %d %d\n", b, c, a); }
            }
            else {
            if (a < b) { printf("%d %d %d\n", c, a, b); }
            else { 
			printf("%d %d %d\n", c, b, a); }
            }
        }
        break;
        }
 
        case 3: {
            double valor1, valor2;
            int codOperacao, resultado;
 
            printf("\nESOFT_MB - Ex2\n");
            printf("Digite o primeiro valor: ");
            scanf("%lf", &valor1);
 
            printf("Digite o segundo valor: ");
            scanf("%lf", &valor2);
 
            printf("Digite o codigo da operacao (1=> 2=< 3=== 4=!=): ");
            scanf("%d", &codOperacao);
 
            switch (codOperacao) {
                case 1:
                resultado = (valor1 > valor2);
                printf("%s\n", resultado ? "Verdadeiro" : "Falso");
                break;
                case 2:
                resultado = (valor1 < valor2);
                printf("%s\n", resultado ? "Verdadeiro" : "Falso");
                break;
                case 3:
                resultado = (valor1 == valor2);
                printf("%s\n", resultado ? "Verdadeiro" : "Falso");
                break;
                case 4:
                resultado = (valor1 != valor2);
                printf("%s\n", resultado ? "Verdadeiro" : "Falso");
                break;
            	default:
                printf("operador invalido\n");
            }
            break;
            }
        }
        break;
    
    
	return 0;
}

}


