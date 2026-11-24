#include "entrada.h"

#define SENHA 1234
#define LIMITE_TENTATIVAS 3

int main(void) {
    int tentativas = 0;

    while (tentativas < LIMITE_TENTATIVAS) {
        int senha;
        printf("Digite a senha: ");
        if (!ler_inteiro(&senha)) {
            return 1;
        }
        tentativas++;
        if (senha == SENHA) {
            puts("Acesso autorizado");
            return 0;
        }
        if (tentativas < LIMITE_TENTATIVAS) {
            puts("Senha incorreta.");
        }
    }

    puts("Usuário bloqueado");
    return 0;
}
