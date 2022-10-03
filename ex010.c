/*10.1 - Gere dois vetores de 10 posições de forma lógica onde o valor a ser armazenado em cada posição seja correspondente aos cálculos:
Ex : o fatorial de 5! = 120. Assim como o fatorial de 4 = 24.


Vetor1 - cada posição deve armazenar o fatorial correspondente ao índice desta posição.
*/

#include <stdio.h>

#define TAM 10

int main() {
    
	int fat, numero;
    	
	int vetor[TAM];

	printf("CALCULO DO FATORIAL\nNÚMERO: ");
	scanf("%d", &numero) ;

	if(numero !=0){
		
		for(fat = 1; numero > 1; numero = numero - 1){
		
			fat = fat * numero;

			vetor[fat] = fat; 

		}
		printf("\n%d", fat);
		printf("\n%d",vetor[fat]);
	}
	else{
		printf("FATORIAL DE %d É 1",numero);
	}

}
