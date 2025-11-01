#include <stdio.h>

/* -----------------------------------------
   Funções recursivas para Torre, Bispo e Rainha
----------------------------------------- */

// Torre: move para cima recursivamente
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorre(casas - 1);
}

// Bispo (diagonal): recursivo
void moverBispoRec(int casas) {
    if (casas == 0) return;
    printf("Cima\nDireita\n"); // diagonal = cima + direita
    moverBispoRec(casas - 1);
}

// Rainha: combina torre (vertical) + bispo (diagonal)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");      // movimento vertical
    printf("Direita\n");  // movimento horizontal/diagonal
    moverRainha(casas - 1);
}

/* -----------------------------------------
   Função principal
----------------------------------------- */
int main() {

    // Quantidade de casas movidas na recursão
    int casas = 4;

    /* -----------------------------------------
       Torre > Recursividade
    ----------------------------------------- */
    printf("Movimento da Torre:\n");
    moverTorre(casas);
    printf("\n");

    /* -----------------------------------------
       Bispo -> Recursividade + Loops aninhados
    ----------------------------------------- */
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRec(casas);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    int i, j;
    for (i = 0; i < casas; i++) {       // vertical
        for (j = 0; j < casas; j++) {   // horizontal
            if (i == j) { // diagonal
                printf("Cima\nDireita\n");
            }
        }
    }
    printf("\n");

    /* -----------------------------------------
       Rainha -> Recursividada
    ----------------------------------------- */
    printf("Movimento da Rainha:\n");
    moverRainha(casas);
    printf("\n");

    /* -----------------------------------------
       Cavalo -> Loops complexos (2 cima, 1 direita)
    ----------------------------------------- */
    printf("Movimento do Cavalo:\n");

    int passosVertical = 2;
    int passosHorizontal = 1;

    for (i = 1; i <= passosVertical; i++) {  // sobe 2
        if (i == 2) {
            printf("Cima\n");
            for (j = 1; j <= passosHorizontal; j++) { // direita 1
                if (j == 1) {
                    printf("Direita\n");
                    break; // só um passo
                }
            }
        } else {
            printf("Cima\n");
            continue;
        }
    }

    printf("\n");

    return 0;
}
