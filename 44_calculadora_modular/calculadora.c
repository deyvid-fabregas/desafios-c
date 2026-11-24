#include <float.h>
#include <math.h>
#include "calculadora.h"

EstadoCalculo somar(double a, double b, double *resultado) {
    if ((b > 0 && a > DBL_MAX - b) || (b < 0 && a < -DBL_MAX - b)) {
        return RESULTADO_FORA_DO_INTERVALO;
    }
    *resultado = a + b;
    return CALCULO_OK;
}

EstadoCalculo subtrair(double a, double b, double *resultado) {
    return somar(a, -b, resultado);
}

EstadoCalculo multiplicar(double a, double b, double *resultado) {
    if (fabs(b) > 1 && fabs(a) > DBL_MAX / fabs(b)) {
        return RESULTADO_FORA_DO_INTERVALO;
    }
    *resultado = a * b;
    return CALCULO_OK;
}

EstadoCalculo dividir(double a, double b, double *resultado) {
    if (b == 0) {
        return DIVISAO_POR_ZERO;
    }
    if (fabs(b) < 1 && fabs(a) > DBL_MAX * fabs(b)) {
        return RESULTADO_FORA_DO_INTERVALO;
    }
    *resultado = a / b;
    return CALCULO_OK;
}
