#include <stdio.h>
#include <stdlib.h>

/* Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de
combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina), calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90.
 */

int main() {
float l, nv;
char t;
	
	printf("Litros: ");
		scanf("%f", &l);
	printf("Tipo de gasolina: ");
		scanf("%s", &t);
	if(l <= 20 && t == 'A') {
		nv = l * 2.90 - (l * 3) / 100;
	}else {
		nv = l * 2.90 - (l * 5) / 100;
	}
	if(l <= 20 && t == 'G') {
		nv = l * 3.30 - (l * 4) / 100;
	}else {
		nv = l * 3.30 - (l * 6) / 100;
	} 
	printf("Valor a ser pago %.2f", nv); 
	return 0;
}
