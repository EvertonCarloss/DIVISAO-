#include <stdio.h>
#include <locale.h>

// DIVISAO.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, n2, divisao;

printf("DIGITE O PRIMEIRO N�MERO:  ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO N�MERO: ");
scanf("%d",&n2);

divisao = n1 / n2;

printf("O RESTO DA DIVISAO ENTRE OS N�MEROS %d E %d � %d", n1, n2, divisao);


}
