#ifndef PAGAMENTO_H
#define PAGAMENTO_H

typedef enum {
    PIX = 1,
    CARTAO,
    DINHEIRO
} FormaPagamento;

void exibir_formas_pagamento(void);
double calcular_desconto(double compra, FormaPagamento forma);
double calcular_total(double compra, FormaPagamento forma);

#endif
