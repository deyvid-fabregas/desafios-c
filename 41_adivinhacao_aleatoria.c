#include <time.h>
#include "entrada.h"

#define LIMITE 100

int main(void) {
    size_t tentativas = 0;
    int palpite;
    int sorteio;
    const int ultimo = RAND_MAX - (RAND_MAX % LIMITE);

    srand((unsigned)time(NULL));
    do {
        sorteio = rand();
    } while (sorteio >= ultimo);
    const int secreto = sorteio % LIMITE + 1;

    puts("Adivinhe o numero secreto entre 1 e 100!");
    do {
        printf("Seu palpite: ");
        if (!ler_inteiro(&palpite)) {
            return 1;
        }
        tentativas++;
        if (palpite < secreto) {
            puts("O numero secreto e MAIOR.");
        } else if (palpite > secreto) {
            puts("O numero secreto e MENOR.");
        }
    } while (palpite != secreto);

    printf("Acertou em %zu tentativa(s)!\n", tentativas);
    return 0;
}
