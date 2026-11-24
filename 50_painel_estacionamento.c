#include "entrada.h"

#define SETORES 3
#define VAGAS_POR_SETOR 5

typedef struct {
    int vagas[SETORES][VAGAS_POR_SETOR];
} Estacionamento;

static void exibir_vagas(const Estacionamento *estacionamento) {
    puts("Vagas (0 = livre, 1 = ocupada):");
    for (int setor = 0; setor < SETORES; setor++) {
        printf("Setor %d:", setor + 1);
        for (int vaga = 0; vaga < VAGAS_POR_SETOR; vaga++) {
            printf(" %d", estacionamento->vagas[setor][vaga]);
        }
        putchar('\n');
    }
}

static int contar_vagas_livres(const Estacionamento *estacionamento) {
    int livres = 0;
    for (int setor = 0; setor < SETORES; setor++) {
        for (int vaga = 0; vaga < VAGAS_POR_SETOR; vaga++) {
            if (estacionamento->vagas[setor][vaga] == 0) {
                livres++;
            }
        }
    }
    return livres;
}

static void atualizar_vaga(Estacionamento *estacionamento, int setor, int vaga, int ocupar) {
    if (setor < 1 || setor > SETORES || vaga < 1 || vaga > VAGAS_POR_SETOR) {
        puts("Setor ou vaga invalida.");
        return;
    }

    int *estado = &estacionamento->vagas[setor - 1][vaga - 1];
    if (*estado == ocupar) {
        puts(ocupar ? "Vaga ja ocupada." : "Vaga ja livre.");
        return;
    }

    *estado = ocupar;
    puts(ocupar ? "Vaga ocupada." : "Vaga liberada.");
}

int main(void) {
    Estacionamento estacionamento = {0};

    while (1) {
        int opcao;

        puts("1 - Exibir vagas\n2 - Ocupar vaga\n3 - Liberar vaga\n4 - Contar vagas livres\n0 - Sair");
        printf("Opcao: ");
        if (!ler_inteiro(&opcao)) {
            return 1;
        }

        switch (opcao) {
            case 0:
                return 0;
            case 1:
                exibir_vagas(&estacionamento);
                break;
            case 2:
            case 3: {
                int setor, vaga;
                printf("Setor (1 a %d) e vaga (1 a %d): ", SETORES, VAGAS_POR_SETOR);
                if (!ler_inteiro(&setor) || !ler_inteiro(&vaga)) {
                    return 1;
                }
                atualizar_vaga(&estacionamento, setor, vaga, opcao == 2);
                break;
            }
            case 4:
                printf("Vagas livres: %d\n", contar_vagas_livres(&estacionamento));
                break;
            default:
                puts("Opcao invalida.");
                break;
        }
    }
}
