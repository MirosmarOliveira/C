#include <stdio.h>
#include <stdlib.h>

/* As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$
1,00 se forem compradas pelo menos 12. Escreva um programa que leia o
número de maçãs compradas, calcule e escreva o custo total da compra */

int main() {
int macas;
float preco;
	printf("Digite o numero de macas compradas:");
 		scanf("%d", &macas); 	
 	if(macas<12){
 		printf("\n O valor das maças sera de: %.2f ", preco=macas*1.3);
 	}
 	else{
 	 	printf("\n O preco das maças sera de: %.2f", preco = macas);
	}
	return 0;
}
