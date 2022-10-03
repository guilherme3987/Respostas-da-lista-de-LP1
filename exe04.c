/*  4 - Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto mandou criar uma ficha para cada mercadoria com o nome, preço de compra, preço de venda. 
Fazer um algoritmo que :

Determine e escreva quantas mercadorias proporcionam :
a) Lucro < 20 % 
b) 20% <= Lucro <= 30% 
c) Lucro > 30%              */




#include <stdio.h>

#define TAM_x  4
#define TAM_y 1

#define TAM 4

int main ()
{
    
	char produtos[TAM_x][TAM_y] = {"A","B","C","D"};
    

	int produtos_valores_compra[TAM] = {100,270,385,500};
    
	int produtos_valores_venda[TAM] = {150,300,500,1000};
    
    
	int Capital = 0;
    
	int Receita = 0;
    
    
	float Lucro_Total;
    
    
    
   
	printf("INFORMAÇÕES: - NOME - PREÇO DE COMPRA - PREÇO DE VENDA-\n\n");

    


	for(int x =0;x<TAM_x;x++){
        
		Capital = Capital + produtos_valores_compra[x];
        
        
		Receita = Receita + produtos_valores_venda[x] ;
        
        
		Lucro_Total  = (Receita - Capital)/100;
        
		for(int y=0;y<TAM_y;y++){
 
            
			printf("                 %c         %d             %d  ",produtos[x][y],produtos_valores_compra[x],produtos_valores_venda[x]);

        
			}
        
			printf("\n");
        
    
	}
    
	printf("\n                      BRUTO\:%d",Capital);
    
	printf("    RECEITA DA VENDA:                   %d",Receita);
    
	printf("\nLUCRO TOTAL: %f",Lucro_Total);
    
    
    
    



	// PRODUTO A
   
 
	for(int x = 0;x<1;x++){
        
		float Lucro_A = (produtos_valores_venda[x] - produtos_valores_compra[x])%100;

	        printf("\n\nLUCRO A\n%f",Lucro_A);
        
		printf("\nLUCRO > 30%\n");
    
	}
    

	// PRODUTO B

	for (int x=1;x<2;x++){
        
		float Lucro_B = (produtos_valores_venda[x] - produtos_valores_compra[x])%100;
	
        printf("\n\nLUCRO B\n%f",Lucro_B);

	        printf("\n20% <= LUCRO <= 30%",Lucro_B);
 
    
    }
    


	// PRODUTO C
	for(int x=2;x<3;x++){
        
		float Lucro_C = (produtos_valores_venda[x]-produtos_valores_compra[x])%100;
        
		printf("\n\nLUCRO C\n%f",Lucro_C);
        
		printf("\nLUCRO < 20 % ");
        
    
	}

}
