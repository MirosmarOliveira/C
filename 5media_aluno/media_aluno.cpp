#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia
final deste aluno. Considerar que a m�dia � ponderada e que o peso das notas
s�o 30, 30 e 40. F�rmula para o c�lculo da m�dia final �: */

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
