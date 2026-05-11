#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como#include <stdio.h>
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    #include <stdio.h>

int main() {

    // ==============================
    // Declaração das variáveis
    // ==============================
    // Cada variável armazena a quantidade de casas
    // que a peça deverá percorrer no tabuleiro.

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i = 1; // Variável de controle para os laços while e do-while

    // ==============================
    // Movimento da Torre (for)
    // ==============================
    // A Torre se move em linha reta.
    // Neste exemplo, ela irá se mover 5 casas para a direita.
    // A estrutura for é utilizada quando sabemos
    // exatamente quantas repetições serão necessárias.

    printf("=== Movimento da Torre ===\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ==============================
    // Movimento do Bispo (while)
    // ==============================
    // O Bispo se move na diagonal.
    // Neste exemplo, ele irá se mover 5 casas
    // na direção "Cima, Direita".
    // A estrutura while executa enquanto
    // a condição for verdadeira.

    printf("\n=== Movimento do Bispo ===\n");

    i = 1; // Reinicia a variável de controle

    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ==============================
    // Movimento da Rainha (do-while)
    // ==============================
    // A Rainha pode se mover em qualquer direção.
    // Neste exemplo, ela irá se mover 8 casas para a esquerda.
    // A estrutura do-while garante que o bloco
    // seja executado pelo menos uma vez.

    printf("\n=== Movimento da Rainha ===\n");

    i = 1; // Reinicia a variável de controle

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    // ==============================
    // Encerramento do programa
    // ==============================

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
