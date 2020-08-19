#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long long int Fatorial(long long int numfat);
void Pedir(),Calcular(long long int total,long long int habilitados,long long int equipes),Final();

long long int Fatorial(long long int numfat) {
	long long int fat;

	for (fat = 1; numfat > 1; numfat = numfat - 1) {
		fat = fat * numfat;
	}

	return fat;
}

void Pedir() {
	long long int total,habilitados,equipes,erro=0;

	do {
		printf("Digite o número total de estudantes: ");
		scanf("%lli", &total);
		printf("\nDigite o número de estudantes habilitados: ");
		scanf("%lli", &habilitados);
		printf("\nDigite o tamanho da equipe: ");
		scanf("%lli", &equipes);

		if (total > 20) {
			erro = 1;
			system("cls"); 
			printf("AVISO: A linguagem C não suporta calcular fatorial acima de 20.\n\n");
		}
		else if (habilitados >= total) {
			erro = 1;
			system("cls"); 
			printf("AVISO: O número de estudantes habilitados é maior ou igual ao total de estudantes.\n\n");
		}
		else {
			erro = 0;
		}
	} while (erro == 1);

	Calcular(total,habilitados,equipes);
}

void Calcular(long long int total,long long int habilitados,long long int equipes) {
	long long int combinacao1[100],combinacao2[100],n1,p1,n2,p2,i,resultado=0;

	n1 = habilitados;
	p1 = 1;

	n2 = total - habilitados;
	p2 = equipes - 1;

	if ((habilitados >= 1) && (n2 >= p2)) {
		for (i = 0; i < habilitados; i++) {

			combinacao1[i] = Fatorial(n1) / (Fatorial(p1) * Fatorial(n1 - p1));
			combinacao2[i] = Fatorial(n2) / (Fatorial(p2) * Fatorial(n2 - p2));

			p1++;
			p2--;

			resultado = resultado + (combinacao1[i] * combinacao2[i]);
		}
	} 
	else {
		system("cls"); 
		printf("AVISO: Os valores inseridos são inválidos.\n\n");
		Final();
	}

	printf("\n\n=== Resultado: %lli\n\n", resultado);

	Final();
}

void Final() {
	int resposta;

	printf("Você quer?\n[1] Reiniciar\n[2] Sair\n\nResposta: ");
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
			printf("AVISO: O valor inserido é inválido.\n\n");
			Final();
			break;
		}
	}	
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	Pedir();

	system("pause");
	return 0;
}