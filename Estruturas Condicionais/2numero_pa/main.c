#include <stdio.h>
#include <stdlib.h>

/* Ler 5 números inteiros e exibir apenas os pares. */

int main() {
int n1, n2, n3, n4, n5;
	printf("Digite o primeiro numero: ");
		scanf("%d", &n1);
	printf("Digite o segundo numero: ");
		scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
		scanf("%d", &n3);
	printf("Digite o quarto numero: ");
		scanf("%d", &n4);
	printf("Digite o quinto numero: ");
		scanf("%d", &n5);
	printf("Numeros Pares: ");
	if(n1 % 2 == 0 && n2 % 2 == 0) {
		printf("%d", n1);
		printf(",");
	}else if(n1 % 2 == 0) {
		printf("%d", n1);
	}
	if(n2 % 2 == 0 && n3 % 2 == 0) {
		printf("%d", n2);
		printf(",");
	}else if(n2 % 2 == 0) {
		printf(",");
		printf("%d", n2);	
	}
	if(n3 % 2 == 0 && n4 % 2 == 0) {
		printf("%d", n3);
		printf(",");
	}else if (n3 % 2 == 0){
		printf(",");
		printf("%d", n3);
	}
	if(n4 % 2 == 0 && n5 % 2 == 0) {
	printf("%d", n4);
		printf(",");
	}else if(n4 % 2 == 0){
		printf(",");
		printf("%d", n4);
	}
	if(n5 % 2 == 0 && n4 % 2 == 0) {
		printf("%d", n5);
		printf(",");
	}else if(n5 % 2 == 0){
		printf(",");
		printf("%d", n5);
	}
	return 0;
}
