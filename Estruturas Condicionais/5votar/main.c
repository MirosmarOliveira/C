#include <stdio.h>
#include <stdlib.h>

/* Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma
mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio
considerar o m�s em que a pessoa nasceu, e apenas pessoas que tenham a
partir dos 16 anos podem votar). */

int main() {
int anonascimento, anoatual;
	printf("Digite o ano de nascimento: ");
		scanf("%d", & anonascimento);
	printf("Digite o ano atual: ");
		scanf("%d", & anoatual);
			if( anoatual - anonascimento >= 16){
	printf("pode voltar esse ano!");
	}	
			if( anoatual - anonascimento < 16){
	printf("nao pode voltar esse ano!");
	}			
	return 0;
}
