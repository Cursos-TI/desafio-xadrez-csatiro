#include <stdio.h>

int main() {

    // ==============================
    // Declaração das variáveis
    // ==============================
    // Cada variável armazena a quantidade de casas
    // que cada peça deverá percorrer.

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do Cavalo:
    // 2 casas para baixo e 1 casa para a esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;

    int i = 1; // Variável de controle dos laços

    // ==============================
    // Movimento da Torre (for)
    // ==============================
    // A Torre se move 5 casas para a direita.

    printf("=== Movimento da Torre ===\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ==============================
    // Movimento do Bispo (while)
    // ==============================
    // O Bispo se move 5 casas na diagonal:
    // Cima e Direita.

    printf("\n=== Movimento do Bispo ===\n");

    i = 1;

    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ==============================
    // Movimento da Rainha (do-while)
    // ==============================
    // A Rainha se move 8 casas para a esquerda.

    printf("\n=== Movimento da Rainha ===\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    // ==============================
    // Movimento do Cavalo (loops aninhados)
    // ==============================
    // O Cavalo se move em "L":
    // 1) Duas casas para baixo
    // 2) Uma casa para a esquerda
    //
    // Neste exemplo, o loop externo (for)
    // controla as duas casas para baixo.
    // O loop interno (while) executa apenas
    // uma vez para mover uma casa à esquerda.

    printf("\n=== Movimento do Cavalo ===\n");

    // Loop externo: repete duas vezes
    for (i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno: executa uma vez
    int j = 1;

    while (j <= casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    // ==============================
    // Encerramento do programa
    // ==============================

    return 0;
}