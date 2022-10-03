/* 5 - Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama. Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.    */




#include <stdio.h>


int main() {
    
	float massa;
    
	float tempo = 0.013;  //50seg = 0.013h
    
	float massa_final;


    
	printf("MASSA: ");
    
	scanf("%f",&massa);
    
   



 	for(massa_final=0;massa_final<0.5;massa_final++){
        
		massa_final = massa * tempo;
        
		printf("MASSA INICIAL: %f\n",massa);
        
		printf("MASSA FINAL: %f\n",massa_final);
        
		printf("TEMPO CORRIDO[h]: %f\n",tempo);
        

		if(massa_final == 0.5){
            
			printf("MASSA ATINGIDA");
        
		}
        
		else {
            
			massa_final = massa * tempo;
        
		}
    
	}
    
    

}
