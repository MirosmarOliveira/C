
#include <conio.h>
#include <stdio.h>
/* Ler um valor e escrever a mensagem “É MAIOR QUE 10!” se o valor lido for
maior que 10, caso contrário escrever “NÃO É MAIOR QUE 10!” */
int main ()
{
	int num;
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	if (num>10)
   		printf ("\n\nO numero e maior que 10");
	if (num<10)
   		printf ("\n\nO numero e menor que 10");
	return(0);
}
