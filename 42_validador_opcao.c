#include "entrada.h"

int main(void) {
    int resposta;

    do {
        char texto[2];

        printf("Deseja continuar? (S/N): ");
        int leitura = ler_token(texto, sizeof texto);
        if (leitura == EOF) {
            puts("Entrada encerrada.");
            return 1;
        }
        resposta = leitura == 1 ? toupper((unsigned char)texto[0]) : 0;
        if (resposta != 'S' && resposta != 'N') {
            puts("Opcao invalida. Digite S ou N.");
        }
    } while (resposta != 'S' && resposta != 'N');

    puts(resposta == 'S' ? "A operacao continuara." : "A operacao sera encerrada.");
    return 0;
}
