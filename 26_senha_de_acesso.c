#include <stdio.h>

#define SENHA 1234

int main(void) {
    int tentativa;
    do {
        printf("Digite a senha: ");
        if (scanf("%d", &tentativa) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (tentativa != SENHA)
            printf("Senha incorreta!\n");
    } while (tentativa != SENHA);
    printf("Acesso permitido!\n");
    return 0;
}
