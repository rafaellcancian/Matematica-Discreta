#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Organizar(),Somar(),Exibir(),Final();

void Organizar(int n) {
	int i,j;
	int matriz[100][100];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0) {
				matriz[i][j] = 1;
			}
			else {
				matriz[i][j] = 0;
			}
		}
	}

	Somar(n,matriz);
}

void Somar(int n, int matriz[100][100]) {
	int i,j;

	for (i = 1; i < n; i++) {
		for (j = 1; j <= i; j++) {
			matriz[i][j] = matriz[i - 1][j] + matriz[i - 1][j - 1];
		}
	}

	Exibir(n,matriz);
}

void Exibir(int n, int matriz[100][100]) {
	int i,j;

	printf("Exibindo o triângulo de Pascal para n = %d\n\n", n - 1);

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	Final();
}

void Final() {
	int resposta;

	printf("\n\nVocê quer?\n\n[1] Reiniciar\n[2] Sair\n\nResposta: ");
	scanf("%d", &resposta);
	
	switch (resposta) {
		case 1: {
			system("cls");
			main(); 
			break;
		}
		case 2: {
			exit(0);
			break;
		}
		default: {
			system("cls"); 
			printf("ERRO: O valor inserido é inválido.\n\n");
			Final();
			break;
		}
	}	
}

int main () {
	setlocale(LC_ALL, "Portuguese");

	int n,erro=0;

	do {
		printf("=== Programa para exibir o triângulo de Pascal baseado no \"n\" informado.\n\nInforme o valor de n (maior ou igual a zero e menor ou igual a 10): ");
		scanf("%d", &n);

		if ((n > 10) || (n < 0)) {
			erro = 1;
			system("cls");
			printf("ERRO: Insira um valor maior ou igual a zero e menor ou igual a 10.\n\n");
		}
		else {
			erro = 0;
			system("cls");
		}
	} while (erro == 1);

	n++;

	Organizar(n);  

	return 0;
}