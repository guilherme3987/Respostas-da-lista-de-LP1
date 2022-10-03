/*- Faça um programa que calcule o fatorial de um número informado pelo usuário. 
    Obs: O fatorial de 0 é 1.      */

#include<stdio.h>

int main()
{
    
	int fat, numero;
    
	printf("CALCULO DO FATORIAL\nNÚMERO: ");
    
	scanf("%d", &numero) ;
    
    

	if(numero !=0){
        
		for(fat = 1; numero > 1; numero = numero - 1){
            
			fat = fat * numero;
        
		}
        
		printf("\n%d", fat);
        
	}
    
	else{
        
		printf("FATORIAL DE %d É 1",numero);
    
	}

}
