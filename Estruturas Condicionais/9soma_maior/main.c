#include <stdio.h>
#include <stdlib.h>

/* ALGORITMO QUE RECEBA 3 VALORES INTEIROS
( CONSIDERE QUE NÃO SERÃO INFORMADOS VALORES IGUAIS ) 
- ESCREVA A SOMA DOS DOIS NÚMEROS MAIORES.
*/

int main() {
int numero1, numero2, numero3, soma, s1, s2, s3;

	printf("Informe um numero inteiro: ");
		scanf("%d", &numero1);
	printf("Informe outro numero diferente do anterior: ");
		scanf("%d", &numero2);
	printf("Informe outro numero diferente dos anteriores: ");
		scanf("%d", &numero3);
	s1=numero1+numero2;
	s2=numero2+numero3;
	s3=numero1+numero3;
    		if (((s1>s2) && (s1>s3))){
	  			soma=s1;            
  			}
  			if((s2> s1) && (s2>s3)){
  	  			soma=s2; 
  			}
  			if((s3>s1) && (s3>s2)){
  	  			soma=s3; 
  	  		}
	printf("A soma dos numeros e %d", soma);
	return 0;
}
