#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo para ler: quantidade atual em estoque, quantidade m�xima
em estoque e quantidade m�nima em estoque de um produto. Calcular e
escrever a quantidade m�dia ((quantidade m�dia = quantidade m�xima +
quantidade m�nima)/2). Se a quantidade em estoque for maior ou igual a
quantidade m�dia escrever a mensagem 'N�o efetuar compra', sen�o escrever
a mensagem 'Efetuar compra'. */

int main() {
int qnt_atual, qnt_maxima, qnt_minima, qnt_media;

	printf("informe a quantidade atual em estoque: ");
	 	scanf("%d", &qnt_atual);
	printf("informe a quantidade maxima em estoque: ");
   		scanf("%d", &qnt_maxima);
   	printf("informe a quantidade m�nima em estoque: ");
   		scanf("%d", &qnt_minima);
   ((qnt_media = qnt_maxima + qnt_minima)/2);
    		if (qnt_atual>=qnt_media){	  
    printf("\nNao efetuar compra ");          
  			}else{
  	printf("\nEfetuar compra ");
  }
	return 0;
}
