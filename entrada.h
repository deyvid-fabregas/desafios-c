#ifndef ENTRADA_H
#define ENTRADA_H

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* Le um token completo, descartando o excesso sem deixar sobras na entrada. */
static inline int ler_token(char *texto, size_t capacidade) {
    int caractere;
    size_t tamanho = 0;
    int valido = 1;

    do {
        caractere = getchar();
    } while (caractere != EOF && isspace(caractere));

    if (caractere == EOF) {
        return EOF;
    }

    do {
        if (tamanho < capacidade - 1 && caractere != '\0') {
            texto[tamanho++] = (char)caractere;
        } else {
            valido = 0;
        }
        caractere = getchar();
    } while (caractere != EOF && !isspace(caractere));

    texto[tamanho] = '\0';
    return valido;
}

static inline int ler_inteiro(int *valor) {
    char texto[128];
    char *fim;

    if (ler_token(texto, sizeof texto) == 1) {
        errno = 0;
        long numero = strtol(texto, &fim, 10);
        if (errno == 0 && *fim == '\0' && numero >= INT_MIN && numero <= INT_MAX) {
            *valor = (int)numero;
            return 1;
        }
    }

    puts("Entrada invalida");
    return 0;
}

static inline int ler_real(double *valor) {
    char texto[128];
    char *fim;

    if (ler_token(texto, sizeof texto) == 1) {
        errno = 0;
        double numero = strtod(texto, &fim);
        if (errno == 0 && *fim == '\0' && isfinite(numero)) {
            *valor = numero;
            return 1;
        }
    }

    puts("Entrada invalida");
    return 0;
}

#endif
