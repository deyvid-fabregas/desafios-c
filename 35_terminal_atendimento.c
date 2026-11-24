#include "entrada.h"

int main(void) {
    int opcao;
    const char *setor;

    puts("1 - Suporte técnico\n2 - Financeiro\n3 - Comercial\n4 - Cancelamento");
    printf("Opcao: ");
    if (!ler_inteiro(&opcao)) {
        return 1;
    }

    switch (opcao) {
        case 1:
            setor = "Suporte técnico";
            break;
        case 2:
            setor = "Financeiro";
            break;
        case 3:
            setor = "Comercial";
            break;
        case 4:
            setor = "Cancelamento";
            break;
        default:
            puts("Opcao invalida.");
            return 1;
    }

    printf("Atendimento encaminhado para: %s\n", setor);
    return 0;
}
