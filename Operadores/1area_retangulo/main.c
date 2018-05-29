#include<stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura),
calcular e escrever a área do retângulo:  */
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
