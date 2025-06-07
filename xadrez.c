#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE (for)
    int movimentosTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    // A Torre anda em linha reta (horizontal ou vertical)
    // Neste exemplo, ela anda 5 casas para a direita
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
        
    }
    
    printf("\n");
    // Simulação do movimento do BISPO (while)
    int movimentosBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    // O Bispo anda na diagonal
    // Cada casa é uma combinação de "Cima" e "Direita"
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
        
    }
    
    printf("\n");
    // Simulação do movimento da RAINHA (do-while)
    int movimentosRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    // A Rainha pode se mover em qualquer direção
    // Neste exemplo, ela anda 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);
    
    return 0;
}
