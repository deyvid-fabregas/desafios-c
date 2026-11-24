#include "entrada.h"

#define LINHAS 4
#define ASSENTOS_POR_LINHA 5

static void exibir_mapa(int assentos[LINHAS][ASSENTOS_POR_LINHA]) {
    puts("Mapa (0 = disponivel, 1 = ocupado):");
    for (int linha = 0; linha < LINHAS; linha++) {
        printf("Linha %d:", linha + 1);
        for (int assento = 0; assento < ASSENTOS_POR_LINHA; assento++) {
            printf(" %d", assentos[linha][assento]);
        }
        putchar('\n');
    }
}

int main(void) {
    int assentos[LINHAS][ASSENTOS_POR_LINHA] = {0};
    exibir_mapa(assentos);

    while (1) {
        int linha, assento;

        printf("Linha para reserva (1 a %d, 0 encerra): ", LINHAS);
        if (!ler_inteiro(&linha)) {
            return 1;
        }
        if (linha == 0) {
            return 0;
        }

        printf("Assento (1 a %d): ", ASSENTOS_POR_LINHA);
        if (!ler_inteiro(&assento)) {
            return 1;
        }

        if (linha < 1 || linha > LINHAS || assento < 1 || assento > ASSENTOS_POR_LINHA) {
            puts("Linha ou assento invalido.");
        } else if (assentos[linha - 1][assento - 1]) {
            puts("Assento ja ocupado.");
        } else {
            assentos[linha - 1][assento - 1] = 1;
            puts("Reserva confirmada.");
        }

        exibir_mapa(assentos);
    }
}
