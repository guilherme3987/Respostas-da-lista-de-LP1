/*
7 - Dado um número natural na base binária, transformá-lo para a base decimal.
Exemplo:
Dado 10010 a saída será 18, pois 1. 2 4 + 0. 2 3 + 0. 2 2 + 1. 2 1 + 0. 2 0 = 18.
*/


#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>


int main() {
		
	
	char numero_bin[10];
	
	int numero_decimal = 0;
	
	int i,TAM; 
	
	

	printf(" binário ");
	
	
	scanf("%s", &numero_bin);
	
	TAM = strlen(numero_bin); 	
	


	for ( i = TAM-1; i >= 0; i--) {

			printf("||*2^n(%d) +||*2^n(%d)..... : \n",i,i+1);

	    
		printf("\n\n%c|", numero_bin[i]);
		
			if (numero_bin[i] == '1') {

				numero_decimal += pow(2,TAM-1-i);
	
		}
	
	}
		printf("\nNúmero em Decimal: %d", numero_decimal);


}
