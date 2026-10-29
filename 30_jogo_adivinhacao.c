#include <stdio.h>

#define SECRETO 42

int main(void) {
    int palpite, tentativas = 0;
    printf("Adivinhe o numero secreto!\n");
    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;
        if (palpite < SECRETO)
            printf("O numero secreto e MAIOR.\n");
        else if (palpite > SECRETO)
            printf("O numero secreto e MENOR.\n");
    } while (palpite != SECRETO);
    printf("Acertou em %d tentativa(s)!\n", tentativas);
    return 0;
}
