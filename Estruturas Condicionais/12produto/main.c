#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo para ler: a descrição do produto (nome), a quantidade
adquirida e o preço unitário. Calcular e escrever o total (total = quantidade
adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total -
desconto), sabendo-se que:
• Se quantidade <= 5 o desconto será de 2%
• Se quantidade > 5 e quantidade <=10 o desconto será de 3%
• Se quantidade > 10 o desconto será de 5% */

int main() {
	int quantidade ;             
	char produto;
	float preco, total, total_a_pagar, desc_menor_5, desc_menor_10, desc_maior_10, desconto;
	desc_menor_5 = 0.02;
	desc_menor_10 = 0.03;
	desc_maior_10 = 0.05;
        printf("Entre com o nome do Produto : ");   
            scanf("%s", &produto);                       
        printf("\nEntre com a quantidade : ");
            scanf("%d", &quantidade);	
        printf("\nEntre com preco do produto : ");
            scanf("%f", &preco);			        
    (total = quantidade * preco);    			
			if(quantidade <= 5){
	(desconto = total * desc_menor_5);
			}if(quantidade > 5 && quantidade <= 10)
			{			
         	(desconto = total * desc_menor_10);
         	}if(quantidade > 10)
			 {					 	 
         	(desconto = total * desc_maior_10);
			}                    
      	printf("\nPreco unitario : %.2f",preco);
      	printf("\nTotal : %.2f",total);
      	printf("\nDesconto: %.2f",desconto);
      	printf("\nTotal a pagar: %.2f",total, desconto);
       

	
	return 0;
}
