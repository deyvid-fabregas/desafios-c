#ifndef CALCULADORA_H
#define CALCULADORA_H

typedef enum {
    CALCULO_OK,
    DIVISAO_POR_ZERO,
    RESULTADO_FORA_DO_INTERVALO
} EstadoCalculo;

EstadoCalculo somar(double a, double b, double *resultado);
EstadoCalculo subtrair(double a, double b, double *resultado);
EstadoCalculo multiplicar(double a, double b, double *resultado);
EstadoCalculo dividir(double a, double b, double *resultado);

#endif
