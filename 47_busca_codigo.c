#include "entrada.h"

#define TOTAL_CODIGOS 10

int main(void) {
    int codigos[TOTAL_CODIGOS];
    int codigo;

    for (int i = 0; i < TOTAL_CODIGOS; i++) {
        printf("Codigo %d: ", i + 1);
        if (!ler_inteiro(&codigos[i])) {
            return 1;
        }
    }

    printf("Codigo para buscar: ");
    if (!ler_inteiro(&codigo)) {
        return 1;
    }

    for (int i = 0; i < TOTAL_CODIGOS; i++) {
        if (codigos[i] == codigo) {
            printf("Codigo encontrado no indice %d.\n", i);
            return 0;
        }
    }

    puts("Codigo nao encontrado.");
    return 0;
}
