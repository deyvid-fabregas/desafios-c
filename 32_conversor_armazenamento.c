#include <float.h>
#include "entrada.h"

int main(void) {
    const double fator = 1024;
    double gigabytes;

    printf("Armazenamento em GB: ");
    if (!ler_real(&gigabytes)) {
        return 1;
    }
    if (gigabytes < 0 || gigabytes > DBL_MAX / fator / fator) {
        puts("Quantidade de armazenamento fora do intervalo.");
        return 1;
    }

    double megabytes = gigabytes * fator;
    printf("MB: %.2f\nKB: %.2f\n", megabytes, megabytes * fator);
    return 0;
}
