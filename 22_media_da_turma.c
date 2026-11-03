#include <stdio.h>

int main(void) {
    int qtd, i;
    double nota, soma = 0;
    do {
        printf("Quantidade de alunos: ");
        if (scanf("%d", &qtd) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (qtd <= 0)
            printf("Quantidade invalida! Tente novamente.\n");
    } while (qtd <= 0);
    for (i = 1; i <= qtd; i++) {
        printf("Nota do aluno %d: ", i);
        if (scanf("%lf", &nota) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        soma += nota;
    }
    printf("Media da turma: %.2f\n", soma / qtd);
    return 0;
}
