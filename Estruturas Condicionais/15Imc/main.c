#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Construa um programa para determinar se o indiv�duo est� com um peso
favor�vel. Essa situa��o � determinada atrav�s do IMC (�ndice de Massa
Corp�rea), que � definida como sendo a rela��o entre o peso e o quadrado da
altura do indiv�duo. */

int main()
{
    float peso,altura,imc;
        printf("Peso: ");
        	scanf("%f",&peso);
        printf("Altura: ");
        	scanf("%f",&altura);
    imc = peso / (pow ( altura,2)) ;
        printf ("\nSeu IMC = %.2f", imc );
        		if (imc < 18.5)
        		{
        printf("\nAbaixo do peso\n\n");
        		}            
        		if (imc >= 18.5 && imc <= 25)
        		{
    	printf("\n\nPeso normal\n\n");
        		}
        		if (imc > 25 && imc <= 30)
        		{
        printf("\n\nAcima do peso\n\n");
        		}
        		if (imc > 30 )
        		{
        printf("\n\nObeso\n\n");
        		}
        system ("pause");
        return 0 ;
}
