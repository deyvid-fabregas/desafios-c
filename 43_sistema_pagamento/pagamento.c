#include <stdio.h>
#include "pagamento.h"

void exibir_formas_pagamento(void) {
    puts("1 - PIX\n2 - Cartao\n3 - Dinheiro");
}

double calcular_desconto(double compra, FormaPagamento forma) {
    return forma == PIX ? compra * 0.05 : 0;
}

double calcular_total(double compra, FormaPagamento forma) {
    return compra - calcular_desconto(compra, forma);
}
