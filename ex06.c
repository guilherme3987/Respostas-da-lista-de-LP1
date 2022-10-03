#include <stdio.h>
#include <stdlib.h>

#define TAM 7

int main(){
    int notas[TAM] = {100,50,20,10,5,2,1};
    int saque[TAM];
    int op;
    int *point_notas; 
    int *point_saque;

    int *cedulas ;
    
    
    printf("SIMULADOR\n---- CAIXA ELETRÔNICO ----\nNOTAS: \n- 100[600u]\n- 50[100u]\n- 20[50u]\n- 10[60u]\n- 5[70u]\n- 2[10u]\n- 1[5u]\nsaques até R$600\n\n (0) - SAQUE\n(1) - SAIR\n  ");
    scanf("%d",&op);
    if(op==0){
        printf("VALOR PARA SAQUE:");
        scanf("  %d",&saque[TAM]);
        point_saque = saque[TAM];
        printf("%d",point_saque);
        
        for(int x =0;x<TAM;x++){
            point_notas = notas[x];
            
            cedulas = 2*notas[x];

            if(point_notas == point_saque){
                printf("\nVALOR QUE SERÁ SACADO %d \n 1u DE %d",point_saque,point_notas);
            }
            if(point_saque == cedulas){
                printf("\n OU VALOR QUE SERÁ SACADO %d \n 2u DE %d",point_notas,point_notas);
            }
            
        }
    }
    else{
        printf("OPERAÇÃO ENCERRADA");
    }

} 

