#include <stdio.h>
#include <locale.h>

// DIVISAO.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, n2, divisao;

printf("DIGITE O PRIMEIRO NÚMERO:  ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO NÚMERO: ");
scanf("%d",&n2);

divisao = n1 / n2;

printf("O RESTO DA DIVISAO ENTRE OS NÚMEROS %d E %d É %d", n1, n2, divisao);


}
