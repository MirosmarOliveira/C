#include <stdio.h>
#include <stdlib.h>

/* Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das
vendas ate´ R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e
escrever o seu salário total. */

int main() {
int vendas;
float salario_fixo, comissao, salariototal; 
	printf("Informe o salario fixo : ");
		scanf("%f", & salario_fixo);
	printf("Informe o valor total das vendas : ");
		scanf("%d", & vendas);
			if (vendas <= 1500){
	comissao = vendas + (vendas * 3 / 100);
			}else
			{
	comissao = (vendas-1500);
    comissao = vendas + (comissao * 8) / 100;
			}
	salariototal  = salario_fixo + comissao;
   	printf("\nSalario Fixo :%.2f", salario_fixo);
  	printf("\nComissao :%.2f", comissao);
 	printf("\nTotalizando :%.2f", salariototal);
	return 0;
}
