#include <float.h>
#include "entrada.h"

static void mostrar_raiz(double numero) {
    if (numero < 0) {
        puts("A raiz quadrada real exige um numero nao negativo.");
        return;
    }
    printf("Raiz quadrada: %.6g\n", sqrt(numero));
}

static void mostrar_quadrado(double numero) {
    double magnitude = fabs(numero);
    if (magnitude > 1 && magnitude > DBL_MAX / magnitude) {
        puts("Resultado fora do intervalo.");
        return;
    }
    printf("Quadrado: %.6g\n", numero * numero);
}

static void mostrar_arredondamentos(double numero) {
    printf("Mais proximo: %.0f\nPara baixo: %.0f\nPara cima: %.0f\n",
           round(numero), floor(numero), ceil(numero));
}

int main(void) {
    while (1) {
        int opcao;
        double numero;

        puts("1 - Raiz quadrada\n2 - Quadrado\n3 - Arredondamentos\n0 - Sair");
        printf("Opcao: ");
        if (!ler_inteiro(&opcao)) {
            return 1;
        }
        if (opcao == 0) {
            return 0;
        }
        if (opcao < 1 || opcao > 3) {
            puts("Opcao invalida.");
            continue;
        }

        printf("Digite um numero: ");
        if (!ler_real(&numero)) {
            return 1;
        }

        switch (opcao) {
            case 1:
                mostrar_raiz(numero);
                break;
            case 2:
                mostrar_quadrado(numero);
                break;
            case 3:
                mostrar_arredondamentos(numero);
                break;
        }
    }
}
