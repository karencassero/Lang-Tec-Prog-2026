#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

double calcularINSS(double salario_bruto) {
    double desconto = 0.0;
    if (salario_bruto <= 1412.00) {
        desconto = salario_bruto * 0.075;
    } 
    else if (salario_bruto <= 2666.68) {
        desconto = salario_bruto * 0.09;
    } 
    else if (salario_bruto <= 4000.03) {
        desconto = salario_bruto * 0.12;
    } 
    else {
        desconto = 4000.04 * 0.14;
    }
    return desconto;
}

double calcularIRPF(double salario_base) {
    double imposto = 0.0;
    if (salario_base <= 2259.20) {
        imposto = 0.0;
    } 
    else if (salario_base <= 2826.65) {
        imposto = (salario_base * 0.075) - 169.44;
    } 
    else if (salario_base <= 3751.05) {
        imposto = (salario_base * 0.15) - 381.44;
    } 
    else if (salario_base <= 4664.68) {
        imposto = (salario_base * 0.225) - 662.77;
    } 
    else {
        imposto = (salario_base * 0.275) - 896.00;
    }
    return imposto;
}

int main(int argc, char *argv[]) {
	
	// Ex5
	{
        int valor, notas1, notas2, notas5, notas10, notas20, notas50, notas100;
        
        printf("Ex 5\n");
        printf("Digite o valor do saque: ");
        scanf("%d", &valor);

        notas100 = valor / 100;
        valor = valor % 100;

        notas50 = valor / 50;
        valor = valor % 50;

        notas10 = valor / 10;
        valor = valor % 10;

        notas5 = valor / 5;
        valor = valor % 5;

        notas2 = valor / 2;
        valor = valor % 2;

        notas1 = valor; 
        
        printf("Resumo do saque:\n");
        printf("%dx R$ 100\n", notas100);
        printf("%dx R$ 50\n", notas50);
        printf("%dx R$ 10\n", notas10);
        printf("%dx R$ 5\n", notas5);
        printf("%dx R$ 2\n", notas2);
        printf("%dx R$ 1\n", notas1);
	}
	
	// Ex6
	{
        double v0, graus, rad, vx0, vy0, t, x, y, dy;
        double g = 9.8;
        double k = 0.5;
        
        printf("Ex 6\n");
        printf("Digite a Velocidade Inicial (v0): ");
        scanf("%lf", &v0);
        printf("Digite o angulo (em graus): ");
        scanf("%lf", &graus);

        rad = graus * (pi / 180.0);
        vx0 = v0 * cos(rad);
        vy0 = v0 * sin(rad);

        t = (2.0 * vy0) / g;

        y = (1.0 / k) * (vy0 + g / k) * (1.0 - exp(-k * t)) - (g / k) * t;
        dy = (vy0 + g / k) * exp(-k * t) - (g / k);
        t = t - (y / dy);

        y = (1.0 / k) * (vy0 + g / k) * (1.0 - exp(-k * t)) - (g / k) * t;
        dy = (vy0 + g / k) * exp(-k * t) - (g / k);
        t = t - (y / dy);

        y = (1.0 / k) * (vy0 + g / k) * (1.0 - exp(-k * t)) - (g / k) * t;
        dy = (vy0 + g / k) * exp(-k * t) - (g / k);
        t = t - (y / dy);

        x = (vx0 / k) * (1.0 - exp(-k * t));

        printf("Alcance maximo: %.2f metros\n", x);
        printf("Tempo de voo: %.2f segundos\n", t);
	}
	
	// Ex7
	{
        double salario, valor_desconto;

        printf("Ex 7\n");
        printf("Digite o salario bruto: R$ ");
        scanf("%lf", &salario);

        valor_desconto = calcularINSS(salario);

        printf("Salario Bruto: R$ %.2f\n", salario);
        printf("Desconto INSS: R$ %.2f\n", valor_desconto);
        printf("Salario Liquido: R$ %.2f\n", salario - valor_desconto);
	}
    
	// Ex8
	{
        double salario_bruto, desconto_inss, salario_base, valor_irpf;

        printf("Ex 8\n");
        printf("Digite o salario bruto: R$ ");
        scanf("%lf", &salario_bruto);
        
        printf("Digite o desconto do INSS ja calculado: R$ ");
        scanf("%lf", &desconto_inss);

        salario_base = salario_bruto - desconto_inss;
        valor_irpf = calcularIRPF(salario_base);

        printf("Salario Base (para calculo): R$ %.2f\n", salario_base);
        printf("Imposto Retido (IRPF): R$ %.2f\n", valor_irpf);
        printf("Salario Liquido Final: R$ %.2f\n", salario_base - valor_irpf);
    }

	// Ex9
	{
        double valor_hora, qtd_horas;
        double salario_bruto, desconto_inss, salario_base, desconto_irpf, salario_liquido;

        printf("Ex 9\n");
        printf("Digite o valor da hora trabalhada: ");
        scanf("%lf", &valor_hora);
        printf("Digite a quantidade de horas trabalhadas no mes: ");
        scanf("%lf", &qtd_horas);

        salario_bruto = qtd_horas * valor_hora;
        desconto_inss = calcularINSS(salario_bruto);
        salario_base = salario_bruto - desconto_inss;
        desconto_irpf = calcularIRPF(salario_base);
        salario_liquido = salario_bruto - desconto_inss - desconto_irpf;

        printf("RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
        printf("Salario Bruto (Horas x Valor): R$ %8.2f\n", salario_bruto);
        printf("(-) Desconto INSS:             R$ %8.2f\n", desconto_inss);
        printf("(-) Desconto IRPF:             R$ %8.2f\n", desconto_irpf);
        printf("LIQUIDO A RECEBER:             R$ %8.2f\n", salario_liquido);
    }

	return 0;
}

