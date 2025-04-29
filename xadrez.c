#include <stdio.h>

int main(){

    printf("\nJOGO DE XADREZ\n");
    printf("\nMovimento torre, 5 casas para direita.\n"); // A torre se move em linha reta horizontalmente ou verticalmente.

        for(int t = 0; t < 5; t++){  // Movimento da Torre ( for )

            printf("Direita\n"); // Imprime a direção para a direita
        }
    
    printf("\nMovimento bispo, 5 casas Cima, Direita.\n"); // O Bispo se move na diagonal, aqui vamos simular 5 casas
    
    int b = 0;
        
        while( b < 5 ){   // Movimento do Bispo ( while )
            
            printf("Cima, Direita\n");      // Imrpime a direção na diagonal para a direita
            b++;
        }
    
    printf("\nMovimento Rainha, 8 casas para a esquerda.\n"); // A Rainha se move em todas as direções, vamos simular 8 casas para esquerda

    int r = 0;
        
        do{                     // Movimento da Rainha ( do while )
            
            printf("Esquerda\n"); // Imprime a direção para a esquerda
            r++;
        
        } while ( r < 8);

    printf("Movimento Cavalo, 3 casas em L (Cima, Direita, Direita)\n"); // O cavalo move 3 casas em L
    
    int movimentoCavalo = 1;

        while(movimentoCavalo--){               // Movimento do cavalo em loops aninhados ( while e for )

            for(int c = 0; c < 2; c++){
                printf ("Direita\n");  // Imprime a direção para direita
            }
                printf("Cima\n");      // Imprime a direção para cima
        }


    return 0;

}