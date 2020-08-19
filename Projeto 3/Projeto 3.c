#include <stdio.h>
#include <stdlib.h>
 
int main() {
	float a=0, b=1, i, n, r;
	
	printf("Insira o numero de meses: ");
	scanf("%f", &n);

	if(n > 50) {
		printf("\nO valor inserido e invalido.\n");
		return 1;
	}
	
	printf("\nResultados:\n\n");

	for(i = 1; i <= n; i++) {
		a = b;
		b = r;
		r = a + b;
		
		printf("Mes %.0f: %.0f\n", i, r);
	}
	
	return 0;
}
