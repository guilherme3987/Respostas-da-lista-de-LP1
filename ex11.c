// QUDRADO MÁGICO
/*  
    -> Matriz quadrada Anxn
    -> Soma de cada linha,coluna e diagonal são as mesmas (M)

*/

#include <stdio.h>
#define LINHA 3
#define COLUNA 3
int main(){
    int Anxn [LINHA][COLUNA] = {6,1,8,7,5,3,2,9,4};
    int soma_linha = 0;
    int soma_coluna =0;
    int soma_diagonal = 0;

    
    printf("TESTE SE A MATRIZ É QUADRADO MÁGICO\n");

    for(int linha =0;linha<LINHA;linha ++){
        for(int coluna =0;coluna<COLUNA;coluna++){
            printf("%d",Anxn[linha][coluna]);
        }
        printf("\n");
    }
    // SOMAR LINHAS 
    for (int linha =0 ;linha<LINHA;linha++){
        for(int coluna =0;coluna<COLUNA;coluna++){
            soma_linha = soma_linha + Anxn[linha][coluna];
        }
    }
    printf("\n\nSOMA DOS ELEMENTOS DAS LINHAS: %d",soma_linha);

    // SOMAR COLUNAS    
    for (int coluna = 0;coluna<COLUNA;coluna++){
        for(int linha = 0;linha<LINHA;linha++){
            soma_coluna = soma_coluna +Anxn[linha][coluna];
        }
    }
    printf("\n\nSOMA DOS ELEMENTOS DAS COLUNAS: %d",soma_coluna);
     
    // SOMAR ELEMENTOS DA DIAGONAL    
             
    for (int linha =0;linha<LINHA;linha++){
        for (int coluna =0;coluna<COLUNA;coluna++){
            soma_diagonal = soma_diagonal + Anxn[linha][coluna];
        }
    }
    printf("\n\nSOMA DOS ELEMENTOS DA DIAGONAL: %d ",soma_diagonal);

    
    if (soma_linha == soma_coluna && soma_coluna == soma_diagonal && soma_linha == soma_diagonal ){
        printf("\nMATRIZ É UM QUADRADO MÁGICO");
    }
    
} 
