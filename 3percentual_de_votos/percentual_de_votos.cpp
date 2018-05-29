#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que
cada um representa em relação ao total de eleitores. */

int main() {
int total_eleitores, votos_brancos, votos_nulos, votos_validos;
float percentual_votos_brancos, percentual_votos_nulos, percentual_votos_validos;
	printf("qual o total de eleitores? ");
		scanf("%d", &total_eleitores);
	printf("qual o total de votos brancos? ");
		scanf("%d", &votos_brancos);
	printf("qual o total de votos nulos? ");
		scanf("%d", &votos_nulos);
	printf("qual o total de votos validos? ");
		scanf("%d", &votos_validos);	
			percentual_votos_brancos = (votos_brancos * 100) / total_eleitores;
			percentual_votos_nulos = (votos_nulos * 100) / total_eleitores;
			percentual_votos_validos = (votos_validos * 100) / total_eleitores;
	printf("o percentual de votos brancos foi de %.2f\n", percentual_votos_brancos);
	printf("o percentual de votos nulos foi de %.2f\n", percentual_votos_nulos);
	printf("o percentual de votos validos foi de %.2f\n", percentual_votos_validos);
	return 0;
}
