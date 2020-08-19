#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void Torres(int discos, char pino1, char pino2, char pino3),Final();

int count=0;

void Torres(int discos, char pino1, char pino2, char pino3) {
	count++;

	if (discos == 1) {
		printf("\n- Mova o disco 1 do pino %c para o pino %c", pino1, pino2);

		return;
	}

	Torres(discos - 1, pino1, pino3, pino2);

	printf("\n- Mova o disco %d do pino %c para o pino %c", discos, pino1, pino2);

	Torres(discos - 1, pino3, pino2, pino1);
}

void Final() {
	int resposta;

	count=0;

	printf("\n\n\nVocê quer?\n\n[1] Reiniciar\n[2] Sair\n\nResposta: ");
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

int main() {
	setlocale(LC_ALL, "Portuguese");

	int discos,erro=0;

	do {
		printf("=== Programa para exibir a menor resolução possível do jogo torre de Hanoi baseado no número de discos informado.\n\nInforme o número de discos (maior que zero): ");
		scanf("%d", &discos);

		if (discos <= 0) {
			erro = 1;
			system("cls");
			printf("ERRO: Insira um valor maior que zero.\n\n");
		}
		else {
			erro = 0;
			system("cls");
		}
	} while (erro == 1);

	printf("A sequência de movimentos que deve ser realizada é:\n");

	Torres(discos, 'A', 'C', 'B');

	printf("\n\n=== Movimentos mínimos para \"%d\" discos: %d", discos, count);
	
	Final();

	return 0;
}