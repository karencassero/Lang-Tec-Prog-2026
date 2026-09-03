#include <stdio.h>
#include <stdlib.h>

void ex2(){
		//Lista 2 - Ex2
		float dolar, real, cota;
		scanf("%f", &real);
		scanf("%f", &cota);
		printf("%f reais são %f dólares", real, (real/cota));
}

void ex3(){
		//Lista 2 - Ex3
		float tempC, tempF;
		scanf ("%f", &tempC);
		tempF = tempC*(9.0/5.0) + 32.0;
		printf ("A temperatura máxima de hoje na tela da globo %f\n", tempF);
}

int ex8(){
		//Lista 2 - Ex8
		int segundos, horas, minutos;
		scanf("%d", &segundos);
		horas = segundos/3600;
		minutos = (segundos-(horas*3600))/60;
		segundos = segundos-((horas*3600)+(minutos*60));
		printf("Tempo %d:%d:%d\n", horas, minutos, segundos);
		return horas;
}

int main(int argc, char *argv[]) {
	int resposta, retorno;
	printf ("Usuario, qual exercicio quer resolver? |2|3|8|\n");
	scanf("%d", &resposta);
	
	switch (resposta){
	case 2:
		ex2();
	break;
		
	case 3:
		ex3();
	break;
	
	case 8:
		retorno = ex8();
		printf("\t \t %d", retorno);
	break;
	}
	return 0;
}
