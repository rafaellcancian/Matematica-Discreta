#include <stdio.h>
#include <stdlib.h>
int bolasBrancas,bolasPretas;
int fat1, fat2, fat3, n, p=7,j, x;
float combinacao;
void CorBolas(){
    printf("Digite o numero de bolas brancas \n");
    scanf("%d",&bolasBrancas);

    printf("Digite o numero de bolas pretas \n");
    scanf("%d",&bolasPretas);
    n = bolasBrancas + bolasPretas;

    j = n - p;

    printf("VALOR N %i\n\n", n);
    printf("VALOR P %i\n\n", p);
    printf("VALOR J %i\n\n", j);
}
void Fatorial1(){
    for(fat1 = 1; n > 1; n = n - 1){
        fat1 = fat1 * n;
    }
    printf("VALOR FAT1 %i\n\n", fat1);
}
void Fatorial2(){
    for(fat2 = 1; p > 1; p = p - 1){
        fat2 = fat2 * p;
    }
    printf("VALOR FAT2 %i\n\n", fat2);
}
void Fatorial3(){
    for(fat3 = 1; j > 1; j = j - 1){
        fat3 = fat3 * j;
    }
    printf("VALOR DE FAT3  %i\n\n", fat3);
}
void Multiplicar(){
    x = fat2 * fat3;
    printf("VALOR DE X  %i \n\n", x);
}
void Combinar(){

    combinacao=fat1/x;
    printf("Possibilidades para 4 bolas pretas e :%.2f \n\n ",combinacao);

}

int main()
{
    CorBolas();
    Fatorial1();
    Fatorial2();
    Fatorial3();
    Multiplicar();
    Combinar();
    system("pause");
    return 0;
}
