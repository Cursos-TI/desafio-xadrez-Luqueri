#include <stdio.h>

void torre_recursiva(int n);
void bispo_recursivo(int n);
void rainha_recursiva(int n);

void cavalo_movimento_complexo();

int main() {
    // Movimento da Torre (recursivo)
    torre_recursiva(5);
    printf("\n");
    
    // Movimento do Bispo (recursivo)
    bispo_recursivo(5);
    printf("\n");
    
    // Movimento da Rainha (recursivo)
    rainha_recursiva(8);
    printf("\n");
    
    // Movimento do Cavalo (loops complexos)
    cavalo_movimento_complexo();
    
    return 0;
}

// Função recursiva para movimento da Torre
void torre_recursiva(int n) {
    if (n <= 0) return;  // Caso base
    printf("Direita\n");  // Movimento
    torre_recursiva(n - 1);  // Chamada recursiva
}

// Função recursiva para movimento do Bispo
void bispo_recursivo(int n) {
    if (n <= 0) return;  // Caso base
    printf("Cima Direita\n");  // Movimento diagonal
    bispo_recursivo(n - 1);  // Chamada recursiva
}

// Função recursiva para movimento da Rainha
void rainha_recursiva(int n) {
    if (n <= 0) return;  // Caso base
    printf("Esquerda\n");  // Movimento
    rainha_recursiva(n - 1);  // Chamada recursiva
}

// Função para movimento do Cavalo com loops complexos
void cavalo_movimento_complexo() {
    int movimentos_verticais = 2;  // 2 casas para cima
    int movimentos_horizontais = 1;  // 1 casa para direita

    // Loop externo para controle vertical
    for (int vertical = 0; vertical < movimentos_verticais; vertical++) {
        int horizontal = 0;
        
        // Loop interno para controle horizontal
        while (horizontal < movimentos_horizontais) {
            // Verifica se precisa mudar de direção
            if (vertical < movimentos_verticais) {
                printf("Cima\n");  // Movimento vertical
                break;  // Sai do loop horizontal após movimento vertical
            } else {
                printf("Direita\n");  // Movimento horizontal
                horizontal++;
                continue;  // Continua no loop horizontal
            }
        }
    }
    
    // Movimento horizontal final após movimentos verticais
    for (int i = 0; i < movimentos_horizontais; i++) {
        printf("Direita\n");
    }
}