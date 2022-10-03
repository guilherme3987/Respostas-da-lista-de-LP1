/*1 - Escrever um algoritmo que leia 3 valores a,b,c.
Calcule e escreve a média ponderada com pesos = 5 para números acima de 6 e peso = 2,5 para números abaixo ou igual a 6.    */

#include <stdio.h>

#define peso_1 5

#define peso_2 2.5

#define TAM 5


int main() {
    
	int a,b,c;
    
	int med;

    
    
	printf("CALCULO  DA MÉDIA\n VALORES: \n");
    
    
	scanf("%d %d %d",&a,&b,&c);
    
    

	if(a>6 && b>6 && c>6){
        
		printf("PESO 5\n");
        
		med = (peso_1*a + peso_1*b + peso_1*c)/peso_1;
        
		printf("\nMÉDIA: %d",med);
    
	}
    
    


	if (a<6 && b<6 && c<6){
        
		printf("PESO 2.5\n");
        
		med = (peso_2*a + peso_2*b + peso_2*c)/peso_2;
        
		printf("\nMÉDIA: %d",med);
    
	}
    



	if(a<6 || (b>6 && c>6)){
        
		printf("PESO 5 PARA %d %d",b,c);
        
		printf("\nPESO 2.5 PARA %d ",a);
        
		med = (peso_2*a + peso_1*b + peso_1*c)/(peso_1 + peso_2);
        
		printf("\nMÉDIA %d",med);
        
    
	}
    



	if(b<6 || (a>6 && c>6) ){
        
		printf("PESO 5 PARA %d %d",a,c);
        
		printf("\nPESO 2.5 PARA %d",b);
        
		med = (peso_1*a + peso_2*b + peso_1*c)/(peso_1 + peso_2);
        
		printf("\nMÉDIA %d",med);
    
	}
    
    


	if(c<6 || (a>6 && b>6)){
        
		printf("PESO 5 PARA %d %d",a,b);
        
		printf("\nPESO 2.5 PARA %d",c);
        
		med = (peso_1*a + peso_1*b + peso_2*c)/(peso_1 + peso_2);
        
		printf("\nMÉDIA %d",med);
    
	}	

}
