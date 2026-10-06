#include <stdio.h>
#include <stdlib.h>

int comp_maior (int a, int b){
	if (a>b) return a;
	else return b;
	}
	
int main(int argc, char *argv[]) {
	int valor[10];
	int i;
	
	printf ("Leia os numeros");
	// para (inicial, condição, incremento)
	for (i=0; i<10; i++){
		scanf ("%d", &valor[i]);
	}
	for (i=9; i>=0; i--){
		printf ("|%d|", valor[i]);
	}
	return 0;
}
