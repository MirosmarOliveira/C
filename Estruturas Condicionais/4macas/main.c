#include <stdio.h>
#include <stdlib.h>

/* As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$
1,00 se forem compradas pelo menos 12. Escreva um programa que leia o
n�mero de ma��s compradas, calcule e escreva o custo total da compra */

int main() {
int macas;
float preco;
	printf("Digite o numero de macas compradas:");
 		scanf("%d", &macas); 	
 	if(macas<12){
 		printf("\n O valor das ma�as sera de: %.2f ", preco=macas*1.3);
 	}
 	else{
 	 	printf("\n O preco das ma�as sera de: %.2f", preco = macas);
	}
	return 0;
}
