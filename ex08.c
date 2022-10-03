/*
8 - Dado um número natural na base decimal, transformá-lo para a base binária.
Exemplo: Dado 18 a saída deverá ser 10010.*/


#include <stdio.h>

#include <stdlib.h>


int main() {
 
	int decimal; 
 
	int resultado_bin; 
 
	int num; 
 
 

	printf("DIGÍTE A QUANTIDADE DE CASAS EM BINARIO\n obs: de preferênica use 32 casas para numeros grandes\n");
 
	scanf("%d",&num);
 

	printf("DIGÍTE O NÚMERO EM DECIMAL : ");
 
	scanf("%d", &decimal);

 

	for(num; num >= 0; num--) {
    
		resultado_bin = decimal >> num;

    
		if(resultado_bin & 1) {
        
			printf("1");
    } 		
		else {
        
			printf("0");
    
		}
 
	}
 printf("\n");


}
