#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o
percentual de reajuste. Calcular e escrever o valor do novo sal�rio. */

int main() {
float salario, salario_final, percentual_reajuste;
	printf("digite o salario atual: ");
		scanf("%f", &salario);
	printf("digite o percentual de reajuste desejavel: ");
		scanf("%f", &percentual_reajuste);
	salario_final = salario + (salario * (percentual_reajuste / 100));
	printf("seu salario ficarar: %.2f \n", salario_final);	
	
	return 0;
}
