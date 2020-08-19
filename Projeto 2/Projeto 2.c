#include <stdio.h>
#include <stdlib.h>

void Funcao1 (int n, int **V) {

int x,y;

	V[0][0] = 1;
  
for (x = 1; x < n; x++) {
    V[x][0] = 1;
    V[x][x] = 1;
for (y = 1; y < x; y++) {
	V[x][y] = V[x-1][y] + V[x-1][y-1];
	}
  }

	return;
}

void Funcao2 (int n, int **V) {
	
int x,y;

for (x = 0; x < n; x++) {
for (y = 0; y <= x; y++) {
	printf("%i  ", V[x][y]);
    }
    printf("\n");
  }

	return;
}

int main() {
	
int n,x,y,**V;

	printf("Insira o valor de n: ");
	scanf("%i", &n);

	V = (int **) malloc(n*sizeof(int *));
  
if (V == NULL) {
	printf("\nO valor inserido e invalido.\n");
	return 1;
  }
  
for (x = 0; x < n; x++) {
	V[x] = (int *) malloc((x+1)*sizeof(int));
    
if (V[x] == NULL) {
	printf("\nO valor inserido e invalido.\n");
	return 1;
    }
  }

if (n <= 0) {
	printf("\nO valor inserido e invalido.\n");
	return 1;
  }
  
if (n > 10) {
	printf("\nO valor inserido e maior do que 10.\n");
	return 1;
  }

Funcao1 (n,V);
Funcao2 (n,V);

	return 0;
}
