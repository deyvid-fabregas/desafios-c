#include "../entrada.h"
#include "pagamento.h"

int main(void) {
    double compra;
    int opcao;

    printf("Valor da compra: R$ ");
    if (!ler_real(&compra)) {
        return 1;
    }
    if (compra < 0) {
        puts("Valor de compra invalido.");
        return 1;
    }

    exibir_formas_pagamento();
    printf("Forma de pagamento: ");
    if (!ler_inteiro(&opcao)) {
        return 1;
    }
    if (opcao < PIX || opcao > DINHEIRO) {
        puts("Forma de pagamento invalida.");
        return 1;
    }

    FormaPagamento forma = (FormaPagamento)opcao;
    printf("Desconto: R$ %.2f\nTotal: R$ %.2f\n",
           calcular_desconto(compra, forma), calcular_total(compra, forma));
    return 0;
}
