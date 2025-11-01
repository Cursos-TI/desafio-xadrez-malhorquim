#include <stdio.h>

int main() {

    // Quantidade de casas para serem movidas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo (duas para baixo e uma para esquerda)
    int casasBaixo = 2;
    int casasEsquerda = 1;

    int i, j;

    /* -----------------------------------------
       Movimento da Torre -> FOR
       (5 casas para a direite)
    ----------------------------------------- */
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    /* -----------------------------------------
       Movimento do Bispo -> WHILE
       (5 casas na diagonal cima + direita)
    ----------------------------------------- */
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    /* -----------------------------------------
       Movimento da Rainha -> DO-WHILE
       (8 casas para a esquerda)
    ----------------------------------------- */
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);
    printf("\n");

    /* -----------------------------------------
       Movimento do Cavalo -> For + While (ANINHADOS)
       (2 casas para baixo, 1 para a esquerda)
       
       Lógica:
       - Loop externo (for): controla 2 movimentos para baixo
       - Loop interno (while): controla 1 movimento para esquerda
       
       Saída esperada:
       Baixo
       Baixo
       Esquerda
    ----------------------------------------- */
    printf("Movimento do Cavalo:\n");

    for (i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    printf("\n");

    return 0;
}

