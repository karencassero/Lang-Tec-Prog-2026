#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, n, s;
	s = 0;
	while(i<10){
		scanf ("%d", &n);
		if (n>0){
			s += n;
			i++;
		}
	}
	printf ("%d | %d", s, s/10);
	
	return 0;
}
