#include <stdio.h>
#include <stdlib.h>
/* Fa�a um algoritmo que leia 5 n�meros e calcule e exiba a multiplica��o de
todos que forem maiores que 50 */

int main() {
int n, c, mult;
c = 1;
mult = 1;
	while(c <= 5) {
		printf("Digite o %d %s",c, "o valor: ");
			scanf("%d", &n);
		if(n > 50) {
			mult = mult * n;
		}
		c +=1;
	}
	printf("A Multplicacao dos maiores que 50: %d", mult);
	return 0;
}




