#include <stdio.h>
#include <stdlib.h>

/*Leia a idade do usuário e informe se ele é criança, entre 0 a 12 anos, se ele é
adolescente, entre 13 a 17 anos, se ele é adulto, entre 18 a 59 anos, ou se ele é
idoso, maior de 60 anos */

int main() {
int idade; 
	printf("Entre com a idade: ");
		scanf("%d", &idade);	
		if(idade>0 && idade<=12){
	printf("\ncriança "); 
	}	if(idade>=13 && idade <=17){
	printf("\nA adolescente"); 	
	}	if(idade>=18  && idade<=59){	
	printf("\nO adulto");
	}	if(idade>=60){	
	printf("\nO idoso");
	   	}  		
	return 0;
	}
