#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o
percentual de reajuste. Calcular e escrever o valor do novo salário. */

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
