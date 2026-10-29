#include <stdio.h>

int main(void) {
    int qtd, i;
    double nota, soma = 0;
    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);
    if (qtd <= 0) {
        printf("Quantidade invalida\n");
        return 0;
    }
    for (i = 1; i <= qtd; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }
    printf("Media da turma: %.2f\n", soma / qtd);
    return 0;
}
