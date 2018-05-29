#include <stdio.h>
#include <stdlib.h>

/* Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Escreva um algoritmo que leia o número de litros vendidos e o tipo de
combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90.
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
