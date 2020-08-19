#include <stdio.h>
#include <stdlib.h>
 
void torres(int, char, char, char);

int main() {
	int n;
 
	printf("Insira o numero de discos: ");
	scanf("%d", &n);
	printf("\nA sequencia de movimentos que deve ser realizada e:\n");
	
	torres(n, 'A', 'C', 'B');
	
	return 0;
}

void torres(int n, char pino1, char pino2, char pino3) {
    if(n == 1) {
		printf("\n- Mova o disco 1 do pino %c para o pino %c", pino1, pino2);
		return;
}
	torres(n - 1, pino1, pino3, pino2);
    printf("\n- Mova o disco %d do pino %c para o pino %c", n, pino1, pino2);
    torres(n - 1, pino3, pino2, pino1);
}
