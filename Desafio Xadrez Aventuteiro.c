#include <stdio.h>

int main() {
    int movimentos_torre = 5;
    int movimentos_bispo = 5;
    int movimentos_rainha = 8;

    // Torre: Movimento reto para a direita (for)
    for (int i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }

    // Bispo: Movimento na diagonal (while)
    int contador_bispo = 0;
    while (contador_bispo < movimentos_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Rainha: Movimento para a esquerda (do-while)
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimentos_rainha);

    // Separador visual entre peças anteriores e o Cavalo
    printf("\n");

    // Cavalo: Movimento em "L" (loops aninhados)
    int etapas_cavalo = 2;           // Duas etapas: baixo e esquerda
    int movimentos_por_etapa[] = {2, 1}; // 2x Baixo, 1x Esquerda
    char *direcoes_cavalo[] = {"Baixo", "Esquerda"};

    // Loop externo (for): controla as etapas do movimento
    for (int etapa = 0; etapa < etapas_cavalo; etapa++) {
        int contador = 0;
        
        // Loop interno (while): executa os movimentos de cada etapa
        while (contador < movimentos_por_etapa[etapa]) {
            printf("%s\n", direcoes_cavalo[etapa]);
            contador++;
        }
    }

    return 0;
}