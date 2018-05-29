#include <stdio.h>
#include <stdlib.h>

/* Uma empresa quer verificar se um empregado está qualificado para a
aposentadoria ou não. Para estar em condições, um dos seguintes requisitos
deve ser satisfeito:
• Ter no mínimo 65 anos de idade.
• Ter trabalhado no mínimo 30 anos.
• Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. */

int main() {
int ano,idade,tempo_de_trabalho,codigo, tempo_que_falta; 
ano = 2018;
	printf("Entre com seu codigo: ");
		scanf("%d", &codigo);
	printf("Entre com a data de nascimento: ");
		scanf("%d", &idade);
	printf("Entre com o Ano de ingresso na empresa: ");
		scanf("%d", &tempo_de_trabalho);
	idade= ano -idade;
 	tempo_de_trabalho= ano - tempo_de_trabalho;		
		if(idade>=65 || idade>=60 && tempo_de_trabalho >=25 || tempo_de_trabalho>=30){
	printf("\nRequerer Aposentadoria ");
		}
		else{
	printf("\nNao Requerer Aponsentadoria "); 
	printf("\nA idade do empregado e %d", idade); 
	printf("\nO tempo de trabalho do emprego e %d", tempo_de_trabalho);
	   	}
	   	if(idade>=60 && tempo_de_trabalho<=25){
		(tempo_que_falta=25-tempo_de_trabalho);
		}
        else{
		(tempo_que_falta=30-tempo_de_trabalho);
		}
        if(tempo_que_falta<0){
	printf("\nO tempo que falta para se aposentar e 0 anos");
        }
		else{
	printf("\nO tempo que falta para se aposentar : %d", tempo_que_falta);
      	}		
	return 0;
	}
