#include <stdio.h>
#include <stdlib.h>

/* Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e
escrever se formam ou não um triângulo. OBS: para formar um triângulo, o
valor de cada lado deve ser menor que a soma dos outros 2 lados.
*/

int main() {
int lado1, lado2, lado3;

	printf("Informe Lado 1: ");
		scanf("%d", &lado1);
	printf("Informe Lado 2: ");
		scanf("%d", &lado2);
	printf("Informe Lado 3: ");
		scanf("%d", &lado3);
    		if ((lado1 > lado2 + lado3) || (lado2 > lado1 + lado3) || (lado3 > lado1 + lado2))
			{
    printf ("\nO triangulo existe.");       
  			}
  			else
			{
   	printf ("\nO triangulo nao existe. ");
}  	
	return 0;
}
