#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima
em estoque e quantidade mínima em estoque de um produto. Calcular e
escrever a quantidade média ((quantidade média = quantidade máxima +
quantidade mínima)/2). Se a quantidade em estoque for maior ou igual a
quantidade média escrever a mensagem 'Não efetuar compra', senão escrever
a mensagem 'Efetuar compra'. */

int main() {
int qnt_atual, qnt_maxima, qnt_minima, qnt_media;

	printf("informe a quantidade atual em estoque: ");
	 	scanf("%d", &qnt_atual);
	printf("informe a quantidade maxima em estoque: ");
   		scanf("%d", &qnt_maxima);
   	printf("informe a quantidade mínima em estoque: ");
   		scanf("%d", &qnt_minima);
   ((qnt_media = qnt_maxima + qnt_minima)/2);
    		if (qnt_atual>=qnt_media){	  
    printf("\nNao efetuar compra ");          
  			}else{
  	printf("\nEfetuar compra ");
  }
	return 0;
}
