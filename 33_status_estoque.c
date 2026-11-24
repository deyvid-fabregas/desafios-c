#include "entrada.h"

int main(void) {
    int quantidade;

    printf("Quantidade em estoque: ");
    if (!ler_inteiro(&quantidade)) {
        return 1;
    }
    if (quantidade < 0) {
        puts("Quantidade invalida.");
        return 1;
    }

    if (quantidade > 0) {
        puts("if/else: Disponível");
    } else {
        puts("if/else: Esgotado");
    }

    printf("Ternario: %s\n", quantidade > 0 ? "Disponível" : "Esgotado");
    return 0;
}
