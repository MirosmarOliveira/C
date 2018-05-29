#include <stdio.h>
#include <stdlib.h>

/*Ler um valor e escrever se é positivo, negativo ou zero.
*/

int main() {
int numero;

	printf("informe um numero: ");
		scanf("%d", &numero);
      		if (numero>0){	  
    printf("\nnumero e positivo ");          
  			}if(numero<0){
  	printf("\nnumero negativo ");
  	}
  			if(numero==0){
  	
  	printf("\nnumero e zero ");	
  }
	return 0;
}
