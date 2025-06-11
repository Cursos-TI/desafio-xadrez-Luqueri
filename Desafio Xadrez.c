#include <stdio.h>

int main() {
    
    int movimentos_torre = 5;
    int movimentos_bispo = 5;
    int movimentos_rainha = 8;

    // Torre: Movimento reto para a direita (usando for)
    for (int i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }

    // Bispo: Movimento na diagonal (cima e direita) (usando while)
    int contador_bispo = 0;
    while (contador_bispo < movimentos_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Rainha: Movimento para a esquerda (usando do-while)
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimentos_rainha);

    return 0;
}