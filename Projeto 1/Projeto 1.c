#include <stdio.h>
#include <stdlib.h>

int main() {
int bB,bP;
float a,b=4,fat1,fat2,fat3,r,combinacao,m;

//Principal
    printf("Digite o numero de bolas brancas: ");
    scanf("%d",&bB);

    printf("Digite o numero de bolas pretas: ");
    scanf("%d",&bP);
    
    a = bB + bP;

    r = a - b;
    
    printf("\nValor de A: %.2f\n", a);
	printf("Valor de B: %.2f\n", b);
	printf("Valor de R: %.2f\n\n", r);
	
//Fatorial 1
    for(fat1=1; a > 1; a--){
        fat1 = fat1 * a;
    }
    printf("Valor de Fat1: %.2f\n", fat1);

//Fatorial 2
    for(fat2 = 1; b > 1; b--){
    	fat2 = fat2 * b;
    }
    printf("Valor de Fat2: %.2f\n", fat2);

//Fatorial 3
    for(fat3 = 1; r > 1; r--){
        fat3 = fat3 * r;
    }
    printf("Valor de Fat3: %.2f\n\n", fat3);

//Multiplicacao
    m = fat2 * fat3;
    printf("Valor de M: %.2f\n\n", m);

//Combinacao
    combinacao=fat1/m;
    printf("O numero de possibilidades para 4 bolas pretas e: %.2f\n", combinacao);
    
	return 0;
}
