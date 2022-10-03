/*Ex: 9
	Teste palíndrome para números e palavras
		*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>


#define TAM 10



int main() {
    
	char palavra[TAM];
    
	int numero,teste,resultado =0;
    
	int x,y,escolha;
    
    

	printf("--------------------------------------------");
    
	printf("\n--- T E S T E   DE  P A L Í N D R O M O ---\n--------------------------------------------\n\n----- 

MENU-----\n(0)--> Palavra \n(1)-->Número\nEscolha: ");

	scanf("%d",&escolha );
    
    

	if(escolha == 0 ){
        
		printf("\n\nPALAVRA: ");
        
		scanf("%s",&palavra);
        
        

		for(int i=0; x = strlen(palavra) - 1;++i,++x){
            
			if(palavra[i] == palavra[x]){
                
				printf(" É PALÍNDROM0");
                
				break;
            
			}
            
			else{
                
				printf("NÃO É PALÍNDROM0");
                
				break;
            
			}
        
		}
    
	}
    
	if(escolha == 1){
        
		printf("\n\nNÚMERO: ");
        
		scanf("%d",&numero);
        
		teste = numero;
        
		while(teste !=0){
            
			resultado = resultado *10;
            
			resultado = resultado + teste%10;
            
			teste = teste/10;
        
		}
        
		if(numero == resultado){
            
			printf("%d É PALINDROMO ",numero);
        
		}
        
		else{
            
			printf("%d NÃO É PALÍNDROMO",numero);
        
		}
    
	}

}
