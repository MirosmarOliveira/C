#include<stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura),
calcular e escrever a �rea do ret�ngulo:  */
int main()
{

int base, altura, area;

	printf("Insira a Base: ");
		scanf("%d", &base);
	printf("Insira a Altura: ");
		scanf("%d", &altura);
area = (base * altura);
	printf(" A Area e: %d \n", area);
getch();
return 0;
}
