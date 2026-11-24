#include "entrada.h"

#define TOTAL_TEMPERATURAS 10

int main(void) {
    double temperaturas[TOTAL_TEMPERATURAS];

    for (int i = 0; i < TOTAL_TEMPERATURAS; i++) {
        printf("Temperatura %d: ", i + 1);
        if (!ler_real(&temperaturas[i])) {
            return 1;
        }
    }

    double maior = temperaturas[0];
    double menor = temperaturas[0];

    for (int i = 1; i < TOTAL_TEMPERATURAS; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
    }

    double media = 0;
    if (maior == menor) {
        media = maior;
    } else {
        /* Escala os valores antes da soma para evitar estouro. */
        double escala = fmax(fabs(maior), fabs(menor));
        for (int i = 0; i < TOTAL_TEMPERATURAS; i++) {
            media += temperaturas[i] / escala;
        }
        media = (media / TOTAL_TEMPERATURAS) * escala;
    }

    int acima_da_media = 0;
    for (int i = 0; i < TOTAL_TEMPERATURAS; i++) {
        if (temperaturas[i] > media) {
            acima_da_media++;
        }
    }

    printf("Media: %.2f\nMaior: %.2f\nMenor: %.2f\nAcima da media: %d\n",
           media, maior, menor, acima_da_media);
    return 0;
}
