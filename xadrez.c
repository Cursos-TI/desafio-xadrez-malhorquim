#include <stdio.h>

int main() {

    // Quantidade de casas a serem movidas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;

    /* -----------------------------------------
       Movimento da Torre -> FOR
       (5 casas para a direita)
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

    return 0;
}

