/* 3 -Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
    Exemplo: 6 é perfeito, pois 1+2+3 = 6.
    Dado um inteiro positivo n, verificar se n é perfeito.    */



#include <stdio.h>


int main() {
    
	int numero,divisores =0 ;
    
	printf("TESTE SE O NÚMERO É PERFEITO:  ");
    
	scanf("%d", &numero);

    

	for(int i = 1; i <= 1; i++) {
        
		printf("divisores de  %d = ",numero);
        
        
		for(int somatorio = 1; somatorio < numero; somatorio++){
	            if (numero % somatorio == 0){
                
				divisores =divisores+ somatorio;
                
				printf("%d + ", somatorio);
            
			}
        
		}
 


       		if (numero == divisores){
            
			printf("\nnumero perfeito");
            
			printf("\n numero/divisores [%d / %d] \n", numero,divisores);
 

       		}
        
		else{
            
			printf("(numero não é perfeito)");
            
			printf("= %d \n", divisores =0 );
        
		}
    
	}

   		 
	return 0;

} 
