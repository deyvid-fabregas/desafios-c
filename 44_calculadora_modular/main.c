#include "../entrada.h"
#include "calculadora.h"

int main(void) {
    int opcao;
    double a, b, resultado;
    EstadoCalculo estado;

    puts("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir");
    printf("Opcao: ");
    if (!ler_inteiro(&opcao)) {
        return 1;
    }

    if (opcao < 1 || opcao > 4) {
        puts("Opcao invalida.");
        return 1;
    }

    printf("Digite dois numeros: ");
    if (!ler_real(&a) || !ler_real(&b)) {
        return 1;
    }

    switch (opcao) {
        case 1:
            estado = somar(a, b, &resultado);
            break;
        case 2:
            estado = subtrair(a, b, &resultado);
            break;
        case 3:
            estado = multiplicar(a, b, &resultado);
            break;
        default:
            estado = dividir(a, b, &resultado);
            break;
    }

    if (estado == DIVISAO_POR_ZERO) {
        puts("Erro: divisao por zero.");
        return 1;
    }
    if (estado == RESULTADO_FORA_DO_INTERVALO) {
        puts("Resultado fora do intervalo.");
        return 1;
    }

    printf("Resultado: %.6g\n", resultado);
    return 0;
}
