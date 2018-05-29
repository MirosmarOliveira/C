#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e
dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano
com 365 dias e mês com 30 dias.
 */

int main() {
int idade_anos, idade_meses, idade_dias, total_dias;
	printf("qual a sua idade atual? ");
		scanf("%d", &idade_anos);
	printf("quantos meses? ");
		scanf("%d", &idade_meses);
	printf("quantos dias? ");
		scanf("%d", &idade_dias);
	total_dias += (idade_anos*365);	
	total_dias += (idade_meses*30);
	total_dias += (idade_dias);
 

	printf("O total de dias e:  %d \n",total_dias);
		scanf("%d", &idade_meses);
	return 0;
}
