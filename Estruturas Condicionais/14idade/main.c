#include <stdio.h>
#include <stdlib.h>

/*Leia a idade do usu�rio e informe se ele � crian�a, entre 0 a 12 anos, se ele �
adolescente, entre 13 a 17 anos, se ele � adulto, entre 18 a 59 anos, ou se ele �
idoso, maior de 60 anos */

int main() {
int idade; 
	printf("Entre com a idade: ");
		scanf("%d", &idade);	
		if(idade>0 && idade<=12){
	printf("\ncrian�a "); 
	}	if(idade>=13 && idade <=17){
	printf("\nA adolescente"); 	
	}	if(idade>=18  && idade<=59){	
	printf("\nO adulto");
	}	if(idade>=60){	
	printf("\nO idoso");
	   	}  		
	return 0;
	}
