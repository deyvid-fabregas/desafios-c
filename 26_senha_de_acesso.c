#include <stdio.h>

#define SENHA 1234

int main(void) {
    int tentativa;
    do {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        if (tentativa != SENHA)
            printf("Senha incorreta!\n");
    } while (tentativa != SENHA);
    printf("Acesso permitido!\n");
    return 0;
}
