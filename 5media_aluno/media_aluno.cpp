#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média
final deste aluno. Considerar que a média é ponderada e que o peso das notas
são 30, 30 e 40. Fórmula para o cálculo da média final é: */

int main() {
int n1, n2, n3, media;
	printf("digite a primeira nota: ");
		scanf("%d", &n1);
	printf("digite a segunda nota: ");
		scanf("%d", &n2);
	printf("digite a terceira nota: ");
		scanf("%d", &n3);

	media = (((n1 * 30) + ( n2 * 30) + (n3 * 40))/100);
	printf("a media do aluno e de : %d \n", media);	
	
	return 0;
}
