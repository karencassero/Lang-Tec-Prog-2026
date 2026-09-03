#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	

	int n;
	printf("Entre com o numero: ");
	scanf("%d", &n);
	
	if(n<10 && n>0)
		if (n==1 || n==2 || n==3 || n==5 || n==7)
			printf("O dobro de %d = %d", n, (n*2));
		else if(n%2 == 0)
			printf("%d+2 = %d", n, n+2);
		else
			printf("|%d|%d|%d|", n-1, n, n+1);
		
	else printf("_out_of_range");	


				
	char op;
	scanf("%c", &op);
	switch(op){
	
	
	case 'a': printf("opa ta falando com ele"); break;
	
	case 'b': printf("Benedito"); break;
	
	case 'c': printf("É complicada a situação"); break;
	
	case 'd': printf("Tamo junto"); break;
			
	}		
	return 0;
}
